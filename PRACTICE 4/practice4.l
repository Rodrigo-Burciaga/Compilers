%{
#include "practice4.tab.h"
%}


INT [1-9]{1}[0-9]*|([0]{1})
DECIMAL (0\.0){1}|(([1-9]{1}[0-9]*)(\.([0-9]*[0-9][0-9]*)))|(\.0)|(0?\.[0-9]*[1-9][0-9]*)
CHARACTERS [a-zA-Z 0-9@\._-]	
cadena \"{CHARACTERS}*\"
operadores "+"|"*"|"/"|"-"|"^"
parentesis \(|\)
coma ","
puntoycoma ";"
mayoromenor [<>]
condition [iI][fF]
pow [pP][oO][wW]

%%

{INT} 		{
			printf("Entero %s\n",yytext);
			yylval.entero = atoi(yytext);
            return (ENTERO);
			}

{DECIMAL} 	{
			printf("Decimal %s\n",yytext);
			yylval.flotante = atof(yytext);
            return (DECIMAL);
        	}

{operadores}	 	{
					printf("Signo op\n");
                	return (yytext[0]);
                	}

{parentesis}	{
				printf("Parentesis\n");
				return (yytext[0]);
				}

{coma}			{
				printf("Coma\n");
				return (yytext[0]);
				}

{puntoycoma}	{
				printf("Punto y coma\n");
				return (yytext[0]);
				}

{condition}		{
				printf("Condicion\n");
				return (IF);
				}

{mayoromenor}		{
				printf("Mayor o menor\n");
				return (yytext[0]);
				}

{pow}			{
				printf("Potencia\n");
				return (POW);
				}


{cadena}		{
				printf("Cadena: %s\n", yytext);
				yylval.cadena = malloc(sizeof(char)*(yyleng-1)); 
    			memcpy (yylval.cadena, yytext+1, yyleng-2);
    			yylval.cadena[yyleng] = 0;                
				return (CAD);
				}

"\n"            {
				printf("Salto de linea\n");
                return (yytext[0]);
                }
%%
