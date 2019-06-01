#!/bin/bash

bison -d practice5.y
flex practice5.l

gcc -c tablasimbolos.c -o tablasimbolos.o
gcc -c operaciones.c -o operaciones.o

gcc lex.yy.c practice5.tab.c operaciones.o tablasimbolos.o  -o analizer -lfl -lm
