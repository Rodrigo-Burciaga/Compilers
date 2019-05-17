%{
#include "practice5.tab.h"
#include "operaciones.h"
void debugPrint(char * cadena);
#define DEBUG 0
%}


INT [1-9]{1}[0-9]*|([0]{1})
DECIMAL (0\.0){1}|(([1-9]{1}[0-9]*)(\.([0-9]*[0-9][0-9]*)))|(\.0)|(0?\.[0-9]*[1-9][0-9]*)
CHARACTERS [a-zA-Z 0-9@\._-]	
cadena \"{CHARACTERS}*\"
variable [a-zA-Z_]{1}[a-zA-Z0-9_]*
operadores "+"|"*"|"/"|"-"|"^"
parentesis \(|\)
coma ","
imprimirTabla printTable
tipoEntero int
tipoFlotante float
tipoCadena string
tipo {tipoFlotante}|{tipoCadena}|{tipoEntero}
puntoycoma ";"
igual "="
mayoromenor [<>]
condition [iI][fF]
pow [pP][oO][wW]

%%

{tipo}				{
					char *s = concatenarCadenas("Tipo: ", yytext);
					debugPrint(s);
					yylval.cadena = malloc(sizeof(char)*(yyleng)); 
    				memcpy (yylval.cadena, yytext, yyleng);
					return (TIPO);
					}


{INT} 		{
			char *s = concatenarCadenas("Entero: ", yytext);
			debugPrint(s);
			yylval.entero = atoi(yytext);
            return (INTEGER);
			}

{DECIMAL} 	{
			char *s = concatenarCadenas("Decimal: ", yytext);
			debugPrint(s);
			yylval.flotante = atof(yytext);
            return (DECIMAL);
        	}

{igual}			{
				debugPrint("Signo igualacion");
                return (yytext[0]);
                }

{operadores}	{
				debugPrint("Signo op");
                return (yytext[0]);
                }

{parentesis}	{
				debugPrint("Parentesis");
				return (yytext[0]);
				}

{coma}			{
				debugPrint("Coma");
				return (yytext[0]);
				}

{puntoycoma}	{
				debugPrint("Punto y coma");
				return (yytext[0]);
				}

{condition}		{
				debugPrint("Condicion");
				return (IF);
				}

{mayoromenor}	{
				debugPrint("Mayor o menor");
				return (yytext[0]);
				}

{pow}			{
				debugPrint("Potencia");
				return (POW);
				}

{imprimirTabla}	{
				printf("Imprimiendo Tabla Símbolos: \n");
				return (PRINT);
				}

{variable}		{
				char *s = concatenarCadenas("Variable: ", yytext);
				debugPrint(s);
				yylval.cadena = malloc(sizeof(char)*(yyleng)); 
    			memcpy (yylval.cadena, yytext, yyleng);
				return (VAR);
				}

{cadena}		{
				char *s = concatenarCadenas("Cadena: ", yytext);
				debugPrint(s);
				yylval.cadena = malloc(sizeof(char)*(yyleng-1)); 
    			memcpy (yylval.cadena, yytext+1, yyleng-2);
    			yylval.cadena[yyleng] = 0;                
				return (CAD);
				}

"\n"            {
				debugPrint("Salto de linea");
                return (yytext[0]);
                }


%%

void debugPrint(char * cadena){
	if(DEBUG){
		printf("%s\n",cadena);
	}
}