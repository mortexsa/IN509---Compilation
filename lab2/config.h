/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Defines automake version */
#define AUTOMAKE_VERSION 

/* Use *.h extension for parser header file */
#define BISON_USE_PARSER_H_EXTENSION 1

/* Defines bison version */
#define BISON_VERSION 3.0.4

/* define if the Boost library is available */
#define HAVE_BOOST /**/

/* define if the Boost::PROGRAM_OPTIONS library is available */
#define HAVE_BOOST_PROGRAM_OPTIONS /**/

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* The llvm bin dir */
#define LLVM_BINDIR "/usr/lib/llvm-3.9/bin"

/* The llvm CPPFLAGS */
#define LLVM_CPPFLAGS "-I/usr/lib/llvm-3.9/include -std=c++0x -gsplit-dwarf -Wl,-fuse-ld=gold -fPIC -fvisibility-inlines-hidden -Wall -W -Wno-unused-parameter -Wwrite-strings -Wcast-qual -Wno-missing-field-initializers -pedantic -Wno-long-long -Wno-maybe-uninitialized -Wdelete-non-virtual-dtor -Wno-comment  -std=c++11 -ffunction-sections -fdata-sections -O2 -g -DNDEBUG  -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS"

/* The llvm version */
#define LLVM_VERSION "3.9.1"

/* The llvm major version */
#define LLVM_VERSION_MAJOR 3

/* The llvm minor version */
#define LLVM_VERSION_MINOR 9

/* Name of package */
#define PACKAGE "dragon-tiger"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "dragon-tiger"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "dragon-tiger 0.0.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "dragon-tiger"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.0.1"

/* Version number of package */
#define VERSION "0.0.1"

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1
