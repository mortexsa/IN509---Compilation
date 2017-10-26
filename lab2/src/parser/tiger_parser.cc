// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "tiger_parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "tiger_parser.hh"

// User implementation prologue.

#line 51 "tiger_parser.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 35 "tiger_parser.yy" // lalr1.cc:413

#include "parser_driver.hh"

#line 57 "tiger_parser.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "tiger_parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  tiger_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  tiger_parser::tiger_parser (ParserDriver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  tiger_parser::~tiger_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  tiger_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  tiger_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  tiger_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  tiger_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  tiger_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  tiger_parser::symbol_number_type
  tiger_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  tiger_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  tiger_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 45: // decl
      case 47: // varDecl
      case 48: // funcDecl
        value.move< Decl * > (that.value);
        break;

      case 44: // program
      case 46: // expr
      case 49: // stringExpr
      case 50: // var
      case 51: // intExpr
      case 52: // callExpr
      case 53: // negExpr
      case 54: // opExpr
      case 55: // assignExpr
      case 56: // whileExpr
      case 57: // forExpr
      case 58: // ifExpr
      case 59: // letInEndExpr
      case 60: // parentheseExpr
      case 61: // breakExpr
        value.move< Expr * > (that.value);
        break;

      case 37: // "id"
      case 38: // "string"
        value.move< Symbol > (that.value);
        break;

      case 69: // param
        value.move< VarDecl * > (that.value);
        break;

      case 70: // typeannotation
        value.move< boost::optional<Symbol> > (that.value);
        break;

      case 39: // "int"
        value.move< int > (that.value);
        break;

      case 66: // decls
        value.move< std::vector<Decl *> > (that.value);
        break;

      case 62: // arguments
      case 63: // nonemptyarguments
      case 67: // nonemptysequences
      case 68: // sequences
        value.move< std::vector<Expr *> > (that.value);
        break;

      case 64: // params
      case 65: // nonemptyparams
        value.move< std::vector<VarDecl *> > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  tiger_parser::stack_symbol_type&
  tiger_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 45: // decl
      case 47: // varDecl
      case 48: // funcDecl
        value.copy< Decl * > (that.value);
        break;

      case 44: // program
      case 46: // expr
      case 49: // stringExpr
      case 50: // var
      case 51: // intExpr
      case 52: // callExpr
      case 53: // negExpr
      case 54: // opExpr
      case 55: // assignExpr
      case 56: // whileExpr
      case 57: // forExpr
      case 58: // ifExpr
      case 59: // letInEndExpr
      case 60: // parentheseExpr
      case 61: // breakExpr
        value.copy< Expr * > (that.value);
        break;

      case 37: // "id"
      case 38: // "string"
        value.copy< Symbol > (that.value);
        break;

      case 69: // param
        value.copy< VarDecl * > (that.value);
        break;

      case 70: // typeannotation
        value.copy< boost::optional<Symbol> > (that.value);
        break;

      case 39: // "int"
        value.copy< int > (that.value);
        break;

      case 66: // decls
        value.copy< std::vector<Decl *> > (that.value);
        break;

      case 62: // arguments
      case 63: // nonemptyarguments
      case 67: // nonemptysequences
      case 68: // sequences
        value.copy< std::vector<Expr *> > (that.value);
        break;

      case 64: // params
      case 65: // nonemptyparams
        value.copy< std::vector<VarDecl *> > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  tiger_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  tiger_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  tiger_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  tiger_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  tiger_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  tiger_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  tiger_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  tiger_parser::debug_level_type
  tiger_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  tiger_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline tiger_parser::state_type
  tiger_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  tiger_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  tiger_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  tiger_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 26 "/home/mortex/Documents/in509/lab2/src/parser/tiger_parser.yy" // lalr1.cc:741
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 531 "tiger_parser.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 45: // decl
      case 47: // varDecl
      case 48: // funcDecl
        yylhs.value.build< Decl * > ();
        break;

      case 44: // program
      case 46: // expr
      case 49: // stringExpr
      case 50: // var
      case 51: // intExpr
      case 52: // callExpr
      case 53: // negExpr
      case 54: // opExpr
      case 55: // assignExpr
      case 56: // whileExpr
      case 57: // forExpr
      case 58: // ifExpr
      case 59: // letInEndExpr
      case 60: // parentheseExpr
      case 61: // breakExpr
        yylhs.value.build< Expr * > ();
        break;

      case 37: // "id"
      case 38: // "string"
        yylhs.value.build< Symbol > ();
        break;

      case 69: // param
        yylhs.value.build< VarDecl * > ();
        break;

      case 70: // typeannotation
        yylhs.value.build< boost::optional<Symbol> > ();
        break;

      case 39: // "int"
        yylhs.value.build< int > ();
        break;

      case 66: // decls
        yylhs.value.build< std::vector<Decl *> > ();
        break;

      case 62: // arguments
      case 63: // nonemptyarguments
      case 67: // nonemptysequences
      case 68: // sequences
        yylhs.value.build< std::vector<Expr *> > ();
        break;

      case 64: // params
      case 65: // nonemptyparams
        yylhs.value.build< std::vector<VarDecl *> > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 121 "tiger_parser.yy" // lalr1.cc:859
    { driver.result_ast = yystack_[0].value.as< Expr * > (); }
#line 698 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 3:
#line 124 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Decl * > () = yystack_[0].value.as< Decl * > (); }
#line 704 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 4:
#line 125 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Decl * > () = yystack_[0].value.as< Decl * > (); }
#line 710 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 5:
#line 128 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 716 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 129 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 722 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 130 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 728 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 131 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 734 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 132 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 740 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 133 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 746 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 134 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 752 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 135 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 758 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 136 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 764 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 137 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 770 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 138 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 776 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 139 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 782 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 140 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = yystack_[0].value.as< Expr * > (); }
#line 788 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 144 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Decl * > () = new VarDecl(yystack_[4].location, yystack_[3].value.as< Symbol > (), yystack_[0].value.as< Expr * > (), yystack_[2].value.as< boost::optional<Symbol> > ()); }
#line 794 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 148 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Decl * > () = new FunDecl(yystack_[7].location, yystack_[6].value.as< Symbol > (), yystack_[4].value.as< std::vector<VarDecl *> > (), yystack_[0].value.as< Expr * > (), yystack_[2].value.as< boost::optional<Symbol> > ()); }
#line 800 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 154 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new StringLiteral(yystack_[0].location, Symbol(yystack_[0].value.as< Symbol > ())); }
#line 806 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 158 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new Identifier(yystack_[0].location, yystack_[0].value.as< Symbol > ()); }
#line 812 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 162 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new IntegerLiteral(yystack_[0].location, yystack_[0].value.as< int > ()); }
#line 818 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 166 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new FunCall(yystack_[3].location, yystack_[1].value.as< std::vector<Expr *> > (), Symbol(yystack_[3].value.as< Symbol > ())); }
#line 824 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 170 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, new IntegerLiteral(yystack_[1].location, 0), yystack_[0].value.as< Expr * > (), o_minus); }
#line 830 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 176 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_times); }
#line 836 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 177 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_divide); }
#line 842 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 178 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_plus); }
#line 848 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 179 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_minus); }
#line 854 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 180 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_eq); }
#line 860 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 181 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_neq); }
#line 866 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 182 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_lt); }
#line 872 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 183 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_gt); }
#line 878 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 184 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_le); }
#line 884 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 185 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new BinaryOperator(yystack_[1].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), o_ge); }
#line 890 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 186 "tiger_parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< Expr * > () = new IfThenElse(yystack_[1].location, yystack_[2].value.as< Expr * > (),
                            new IfThenElse(yystack_[0].location, yystack_[0].value.as< Expr * > (), new IntegerLiteral(nl, 1), new IntegerLiteral(nl, 0)),
                            new IntegerLiteral(nl, 0));
      }
#line 900 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 191 "tiger_parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< Expr * > () = new IfThenElse(yystack_[1].location, yystack_[2].value.as< Expr * > (),
                            new IntegerLiteral(nl, 1), new IfThenElse(yystack_[0].location, yystack_[0].value.as< Expr * > (), new IntegerLiteral(nl, 1), new IntegerLiteral(nl, 0)));
      }
#line 909 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 199 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new Assign(yystack_[1].location, new Identifier(yystack_[2].location, yystack_[2].value.as< Symbol > ()), yystack_[0].value.as< Expr * > ()); }
#line 915 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 202 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new WhileLoop(yystack_[3].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > ()); }
#line 921 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 206 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new ForLoop(yystack_[7].location, new VarDecl(yystack_[6].location, yystack_[6].value.as< Symbol > (), yystack_[4].value.as< Expr * > (), boost::none), yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > ()); }
#line 927 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 209 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new IfThenElse(yystack_[5].location, yystack_[4].value.as< Expr * > (), yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > ()); }
#line 933 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 41:
#line 211 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new IfThenElse(yystack_[3].location, yystack_[2].value.as< Expr * > (), yystack_[0].value.as< Expr * > (), new Sequence(nl, std::vector<Expr *>() )); }
#line 939 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 42:
#line 215 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new Let(yystack_[4].location, std::vector<Decl *>(yystack_[3].value.as< std::vector<Decl *> > ()), new Sequence(nl, yystack_[1].value.as< std::vector<Expr *> > ())); }
#line 945 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 219 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new Sequence(nl, yystack_[1].value.as< std::vector<Expr *> > ()); }
#line 951 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 222 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< Expr * > () = new Break(yystack_[0].location); }
#line 957 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 225 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<Expr *> > () = std::vector<Expr *>(); }
#line 963 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 226 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<Expr *> > () = yystack_[0].value.as< std::vector<Expr *> > (); }
#line 969 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 47:
#line 229 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<Expr *> > () = std::vector<Expr *>({yystack_[0].value.as< Expr * > ()}); }
#line 975 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 48:
#line 231 "tiger_parser.yy" // lalr1.cc:859
    {
    yylhs.value.as< std::vector<Expr *> > () = std::move(yystack_[2].value.as< std::vector<Expr *> > ());
    yylhs.value.as< std::vector<Expr *> > ().push_back(yystack_[0].value.as< Expr * > ());
  }
#line 984 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 237 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<VarDecl *> > () = std::vector<VarDecl *>(); }
#line 990 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 238 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<VarDecl *> > () = yystack_[0].value.as< std::vector<VarDecl *> > (); }
#line 996 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 241 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<VarDecl *> > () = std::vector<VarDecl *>({yystack_[0].value.as< VarDecl * > ()}); }
#line 1002 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 243 "tiger_parser.yy" // lalr1.cc:859
    {
    yylhs.value.as< std::vector<VarDecl *> > () = std::move(yystack_[2].value.as< std::vector<VarDecl *> > ());
    yylhs.value.as< std::vector<VarDecl *> > ().push_back(yystack_[0].value.as< VarDecl * > ());
  }
#line 1011 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 53:
#line 249 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<Decl *> > () = std::vector<Decl *>();}
#line 1017 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 54:
#line 251 "tiger_parser.yy" // lalr1.cc:859
    {
    yylhs.value.as< std::vector<Decl *> > () = std::move(yystack_[1].value.as< std::vector<Decl *> > ());
    yylhs.value.as< std::vector<Decl *> > ().push_back(yystack_[0].value.as< Decl * > ());
  }
#line 1026 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 257 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<Expr *> > () = std::vector<Expr *>({yystack_[0].value.as< Expr * > ()}); }
#line 1032 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 259 "tiger_parser.yy" // lalr1.cc:859
    {
    yylhs.value.as< std::vector<Expr *> > () = std::move(yystack_[2].value.as< std::vector<Expr *> > ());
    yylhs.value.as< std::vector<Expr *> > ().push_back(yystack_[0].value.as< Expr * > ());
  }
#line 1041 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 265 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<Expr *> > () = std::vector<Expr *>(); }
#line 1047 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 266 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< std::vector<Expr *> > () = yystack_[0].value.as< std::vector<Expr *> > (); }
#line 1053 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 269 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< VarDecl * > () = new VarDecl(yystack_[2].location, yystack_[2].value.as< Symbol > (), nullptr, yystack_[0].value.as< Symbol > ()); }
#line 1059 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 60:
#line 272 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< boost::optional<Symbol> > () = boost::none; }
#line 1065 "tiger_parser.cc" // lalr1.cc:859
    break;

  case 61:
#line 273 "tiger_parser.yy" // lalr1.cc:859
    { yylhs.value.as< boost::optional<Symbol> > () = Symbol(yystack_[0].value.as< Symbol > ()); }
#line 1071 "tiger_parser.cc" // lalr1.cc:859
    break;


#line 1075 "tiger_parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  tiger_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  tiger_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char tiger_parser::yypact_ninf_ = -32;

  const signed char tiger_parser::yytable_ninf_ = -1;

  const short int
  tiger_parser::yypact_[] =
  {
      44,    44,    44,    44,   -31,   -32,   -32,    44,    47,   -32,
     -32,    32,   145,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   145,    49,    50,    43,
      10,    36,   -27,    -2,    44,    44,   -32,    44,    44,    44,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    44,
     -32,    44,    44,    44,    23,    24,   -32,   -32,   -32,    44,
     145,    55,    60,   145,    89,    89,    78,   145,   175,   175,
     175,   175,   175,   175,   168,   157,   145,   145,   129,    35,
      59,    62,   100,   -32,    44,    44,   -32,    33,    38,    51,
      44,   145,   112,    68,    69,    74,   -32,   -32,    44,   145,
      44,    42,    62,    33,   145,   145,   -32,    66,   -32,    44,
     145
  };

  const unsigned char
  tiger_parser::yydefact_[] =
  {
       0,    57,     0,     0,     0,    53,    44,     0,    21,    20,
      22,     0,     2,     5,     7,     6,     8,    10,     9,    11,
      12,    13,    14,    15,    16,    17,    55,    58,     0,    24,
       0,     0,     0,     0,    45,     0,     1,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     0,     0,    57,     0,     0,    54,     3,     4,     0,
      47,     0,    46,    37,    27,    28,    25,    26,    29,    30,
      31,    33,    32,    34,    35,    36,    56,    38,     0,     0,
       0,    60,    41,    23,     0,     0,    42,    49,     0,     0,
       0,    48,     0,     0,     0,    50,    51,    61,     0,    40,
       0,     0,    60,     0,    18,    39,    59,     0,    52,     0,
      19
  };

  const signed char
  tiger_parser::yypgoto_[] =
  {
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,    34,   -17,   -14
  };

  const signed char
  tiger_parser::yydefgoto_[] =
  {
      -1,    11,    56,    26,    57,    58,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    61,
      62,    94,    95,    32,    27,    28,    96,    89
  };

  const signed char
  tiger_parser::yytable_[] =
  {
      12,    53,    29,    30,    54,    55,    31,    33,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    36,    59,    60,    63,    51,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       1,    77,    78,    34,    49,     2,    40,    50,    52,    82,
      80,    81,    83,    84,    86,    87,    88,     3,     4,    35,
      93,     5,   101,    98,     6,    97,   102,   103,     7,   106,
     109,     8,     9,    10,    91,    92,   108,    79,   107,     0,
      99,    40,    41,    42,    43,    44,    45,    46,   104,     0,
     105,    39,    40,    41,    42,    43,    44,    45,    46,   110,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,     0,     0,    90,     0,   100,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,     0,     0,     0,    85,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    40,    -1,
      -1,    -1,    -1,    -1,    -1
  };

  const signed char
  tiger_parser::yycheck_[] =
  {
       0,    28,     2,     3,    31,    32,    37,     7,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,    35,    34,    35,    26,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       6,    51,    52,     6,     5,    11,    13,     7,    22,    59,
      37,    37,     7,     3,    29,     6,     4,    23,    24,    22,
      37,    27,     4,    22,    30,    37,     7,     3,    34,    37,
      14,    37,    38,    39,    84,    85,   103,    53,   102,    -1,
      90,    13,    14,    15,    16,    17,    18,    19,    98,    -1,
     100,    12,    13,    14,    15,    16,    17,    18,    19,   109,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    -1,    36,    -1,    26,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    -1,    -1,    25,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    13,    14,
      15,    16,    17,    18,    19
  };

  const unsigned char
  tiger_parser::yystos_[] =
  {
       0,     6,    11,    23,    24,    27,    30,    34,    37,    38,
      39,    44,    46,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    46,    67,    68,    46,
      46,    37,    66,    46,     6,    22,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     5,
       7,    26,    22,    28,    31,    32,    45,    47,    48,    35,
      46,    62,    63,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    46,    68,
      37,    37,    46,     7,     3,    25,    29,     6,     4,    70,
      36,    46,    46,    37,    64,    65,    69,    37,    22,    46,
      26,     4,     7,     3,    46,    46,    37,    70,    69,    14,
      46
  };

  const unsigned char
  tiger_parser::yyr1_[] =
  {
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    46,    46,    46,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    54,    54,    54,    54,
      54,    54,    54,    54,    54,    54,    54,    55,    56,    57,
      58,    58,    59,    60,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    69,
      70,    70
  };

  const unsigned char
  tiger_parser::yyr2_[] =
  {
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     8,
       1,     1,     1,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     8,
       6,     4,     5,     3,     1,     0,     1,     1,     3,     0,
       1,     1,     3,     0,     2,     1,     3,     0,     1,     3,
       0,     2
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const tiger_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "\":\"", "\";\"",
  "\"(\"", "\")\"", "\"{\"", "\"}\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\"=\"", "\"<>\"", "\"<\"", "\"<=\"", "\">\"", "\">=\"", "\"&\"",
  "\"|\"", "\":=\"", "\"while\"", "\"for\"", "\"to\"", "\"do\"", "\"let\"",
  "\"in\"", "\"end\"", "\"break\"", "\"function\"", "\"var\"",
  "\"uminus\"", "\"if\"", "\"then\"", "\"else\"", "\"id\"", "\"string\"",
  "\"int\"", "TYPE", "OF", "DEVIDE", "$accept", "program", "decl", "expr",
  "varDecl", "funcDecl", "stringExpr", "var", "intExpr", "callExpr",
  "negExpr", "opExpr", "assignExpr", "whileExpr", "forExpr", "ifExpr",
  "letInEndExpr", "parentheseExpr", "breakExpr", "arguments",
  "nonemptyarguments", "params", "nonemptyparams", "decls",
  "nonemptysequences", "sequences", "param", "typeannotation", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  tiger_parser::yyrline_[] =
  {
       0,   121,   121,   124,   125,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   143,   147,
     153,   157,   161,   165,   169,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   191,   198,   202,   205,
     209,   210,   214,   218,   222,   225,   226,   229,   230,   237,
     238,   241,   242,   249,   250,   257,   258,   265,   266,   269,
     272,   273
  };

  // Print the state stack on the debug stream.
  void
  tiger_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  tiger_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 1541 "tiger_parser.cc" // lalr1.cc:1167
#line 276 "tiger_parser.yy" // lalr1.cc:1168


void
yy::tiger_parser::error (const location_type& l,
                          const std::string& m)
{
  utils::error (l, m);
}
