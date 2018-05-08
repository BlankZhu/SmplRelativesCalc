bison -vdty rltv.y
flex rltv.l
g++ -std=c++11 -o rltv y.tab.c lex.yy.c rltv_calc.cpp
