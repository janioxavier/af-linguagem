#!/bin/sh
flex af.lex
yacc -vd af.y
gcc -w lex.yy.c y.tab.c pilha.c tabelasimbolo.c -o parse
