%{
#include "ejemplo2.tab.h"
%}

NUM [0-9]+
%%

{NUM}           {
		printf("Numero enteros %s\n",yytext);
                yylval.entero = atoi(yytext);
                return (ENTERO);
                }

"+"|"*"	 	{
		printf("Signo ophhhh\n");
                return (yytext[0]);
                }

"\n"            {
		printf("Salto de lineahh\n");
                return (yytext[0]);
                }
%%
