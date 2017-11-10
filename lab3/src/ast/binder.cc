#include "binder.hh"
#include "../utils/errors.hh"
#include "../utils/nolocation.hh"

using utils::error;
using utils::non_fatal_error;

namespace ast {
namespace binder {

/* Returns the current scope */
scope_t &Binder::current_scope() { return scopes.back(); }

/* Pushes a new scope on the stack */
void Binder::push_scope() { scopes.push_back(scope_t()); }

/* Pops the current scope from the stack */
void Binder::pop_scope() { scopes.pop_back(); }

/* Enter a declaration in the current scope. Raises an error if the declared name
 * is already defined */
void Binder::enter(Decl &decl) {
  scope_t &scope = current_scope();
  auto previous = scope.find(decl.name);
  if (previous != scope.end()) {
    non_fatal_error(decl.loc,
                    decl.name.get() + " is already defined in this scope");
    error(previous->second->loc, "previous declaration was here");
  }
  scope[decl.name] = &decl;
}

/* Finds the declaration for a given name. The scope stack is traversed
 * front to back starting from the current scope. The first matching
 * declaration is returned. Raises an error, if no declaration matches. */
Decl &Binder::find(const location loc, const Symbol &name) {
  for (auto scope = scopes.crbegin(); scope != scopes.crend(); scope++) {
    auto decl_entry = scope->find(name);
    if (decl_entry != scope->cend()) {
      return *decl_entry->second;
    }
  }
  error(loc, name.get() + " cannot be found in this scope");
}

Binder::Binder() : scopes() {
  /* Create the top-level scope */
  push_scope();

  /* Populate the top-level scope with all the primitive declarations */
  enter_primitive("print_err", "void", {"string"});
  enter_primitive("print", "void", {"string"});
  enter_primitive("print_int", "void", {"int"});
  enter_primitive("flush", "void", {});
  enter_primitive("getchar", "string", {});
  enter_primitive("ord", "int", {"string"});
  enter_primitive("chr", "string", {"int"});
  enter_primitive("size", "int", {"string"});
  enter_primitive("substring", "string", {"string", "int", "int"});
  enter_primitive("concat", "string", {"string", "string"});
  enter_primitive("strcmp", "int", {"string", "string"});
  enter_primitive("streq", "int", {"string", "string"});
  enter_primitive("not", "int", {"int"});
  enter_primitive("exit", "void", {"int"});
}

/* Declares a new primitive into the current scope*/
void Binder::enter_primitive(
    const std::string &name, const std::string &type_name,
    const std::vector<std::string> &argument_typenames) {
  std::vector<VarDecl *> args;
  int counter = 0;
  for (const std::string &tn : argument_typenames) {
    std::ostringstream argname;
    argname << "a_" << counter++;
    args.push_back(
        new VarDecl(utils::nl, Symbol(argname.str()), nullptr, Symbol(tn)));
  }

  FunDecl *fd = new FunDecl(utils::nl, Symbol(name), std::move(args), nullptr,
                            Symbol(type_name), true);
  fd->set_external_name(Symbol("__" + name));
  enter(*fd);
}

/* Binds a whole program. This method wraps the program inside a top-level main
 * function.  Then, it visits the programs with the Binder visitor; binding
 * each identifier to its declaration and computing depths.*/
FunDecl *Binder::analyze_program(Expr &root) {
  std::vector<VarDecl *> main_params;
  Sequence *const main_body = new Sequence(
      utils::nl,
      std::vector<Expr *>({&root, new IntegerLiteral(utils::nl, 0)}));
  FunDecl *const main = new FunDecl(utils::nl, Symbol("main"), main_params,
                                    main_body, Symbol("int"), true);
  main->accept(*this);
  return main;
}

void Binder::visit(IntegerLiteral &literal) {
}

void Binder::visit(StringLiteral &literal) {
}

void Binder::visit(BinaryOperator &op) {
}

void Binder::visit(Sequence &seq) {
}

void Binder::visit(Let &let) {
}

void Binder::visit(Identifier &id) {
}

void Binder::visit(IfThenElse &ite) {
}

void Binder::visit(VarDecl &decl) {
}

void Binder::visit(FunDecl &decl) {
}

void Binder::visit(FunCall &call) {
}

void Binder::visit(WhileLoop &loop) {
}

void Binder::visit(ForLoop &loop) {
}

void Binder::visit(Break &b) {
}

void Binder::visit(Assign &assign) {
}

} // namespace binder
} // namespace ast
