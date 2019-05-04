#!/bin/bash
bison -d practice4.y
flex practice4.l
gcc lex.yy.c practice4.tab.c -o analizer
