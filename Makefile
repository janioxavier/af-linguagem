#!/bin/sh
flex af.lex
yacc -vd af.y
gcc lex.yy.c y.tab.c -o parse
