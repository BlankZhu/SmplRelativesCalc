%{
#define YYSTYPE char*
#include <string.h>
#include <stdio.h>
#include <iostream> /* C++ header */
#include <string>   /* C++ header */
#include "rltv_calc.h"  /* core function header */
int yylex();
void yyerror(const std::string&);
%}

%token ID

%%
line    :   expr'\n' { std::cout << "Result:" << $1 << std::endl; return 0; }
        ;
expr    :   expr'-'ID     { $$ = convert($1, $3); } /* where magic happen */
        |   ID              { $$ = strdup($1); }
        ;
%%

int main() {
    std::cout << "Welcome to my relatives calculator!" << std::endl;
    std::cout << "Usage: [relatives]-[relatives]-[relatives]-..." << std::endl;
    return yyparse();
}
