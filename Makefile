#!/bin/sh
flex af.lex
yacc -vd af.y -o a
gcc lex.yy.c y.tab.c -o parse
