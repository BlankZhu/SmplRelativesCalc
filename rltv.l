%{
#define YYSTYPE char*
#include "y.tab.h"
#include <string.h>
#include <iostream> /* C++ header */
#include <string> /* C++ header */
void yyerror(const std::string&);
void UnrecognizedToken(char c);
%}

FTT     ("father"|"ShuFu"|"BoFU"|"ShenShen"|"BoMu"|"GuMa"|"GuZhang"|"grandfather"|"grandmother"|"Tangbother"|"TangSister"|"GuBiaobother"|"GuBiaosister")
MTT     ("mother"|"outgrandfather"|"outgrandmother"|"JiuJiu"|"JiuMa"|"YiMa"|"YiZhang"|"JiuBiaobrother"|"JiuBiaosister"|"YiBiaobrother"|"YiBiaosister")
BROT    ("brother"|"elderbrother"|"youngerbrother"|"SaoZi"|"DiXi"|"ZhiZi"|"ZhiNv")
SIST    ("sister"|"eldersister"|"youngersister"|"JieFu"|"MeiFu"|"WaiSheng"|"WaiShengNv")
MYT     ("husband"|"wife"|"son"|"daughter"|"ErXiFu"|"NvXu"|"grandson"|"granddaughter"|"outgrandson"|"outgranddaughter"|"Me"|"You")
WARNING ("ARE YOU SURE???"|"TOO FAR AWAY!")
ID      ({FTT}|{MTT}|{BROT}|{SIST}|{MYT}|{WARNING})

%%
{ID}            { yylval = strdup(yytext); return ID; }
[-\n]            { return yytext[0]; }
.               { UnrecognizedToken(yytext[0]); }
%%

int yywrap(void) {
    return 1;
}

void UnrecognizedToken(char c) {
    std::string s = "Unrecognized Token : ";
    s += c;
    yyerror(s);
}

void yyerror(const std::string &str) {
    std::cout << "Error occure! Error message:" << str << std::endl;
    exit(1);
}
