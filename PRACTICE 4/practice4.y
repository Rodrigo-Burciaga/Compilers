%{
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
extern int yylex(void);
void yyerror(char *s);
int contarDigitos();
char *potenciarCadena(char *cadena, int num, int digitos);
double potency(double base, double exponent);
%}
             
/* Declaraciones de BISON */
%union{
	float numero;
	char* cadena;
}

%token <numero> ENTERO
%token <cadena> CAD
%token POW 

%type <numero> exp
%type <numero> potenciaNum
%type <cadena> texto
%type <cadena> potencia
  
%left '^'           
%left '+' %left '-'
%left '*' %left '/'
%left '('  %left ')'

             
/* Gramática */
%%
             
input:   /* cadena vacía */
        | input line 
;

line:     '\n'
        | exp '\n'  { printf ("\tresultado: %f\n\n", $1); }
        | texto  { printf ("\tresultado: %s\n\n", $1); } 
        | potencia { printf("\tpotencia cadenas: %s\n\n", $1); }
        | potenciaNum { printf("\tpotencia: %f\n\n", $1);}
;
             
exp:     ENTERO	{ $$ = $1;}
	| exp '+' exp        { $$ = $1 + $3;    }
	| exp '*' exp        { $$ = $1 * $3;	}
	| exp '/' exp        { $$ = $1 / $3;	}
	| exp '-' exp		 { $$ = $1 - $3;	}	
	| '-' exp			 { $$ = -$2;		}
	| '(' exp ')'		 { $$ = $2;			}
;

texto: CAD
	| texto '+' CAD  {
			//printf("\n%s, %s\n", $1,$3);
			int texto1 = contarDigitos($1);
			int texto2 = contarDigitos($3);
			$$ = malloc(sizeof(char)*(texto1 + texto2 + 1));
			int i=0;
			for(i;i < texto1; i++){
				*($$+i) = *$1++;
			}
			for(i;i < (texto1 + texto2); i++){
				*($$+i) = *$3++;
			}
		}
;

potencia: texto '^' ENTERO {
			int nDigitos = contarDigitos($1);
			char *potencia = potenciarCadena($1, $3, nDigitos);
			$$ = potencia;
		} 
;

potenciaNum: POW '(' exp ',' exp ')' { 
			$$ = potency($3, $5);
			}
 				       
;     
%%

int main() {
  yyparse();
}
             
void yyerror (char *s)
{
  printf("--%s--\n", s);
}
            
int yywrap()  
{  
  return 1;  
}  

int contarDigitos(char *cad){
	int contador = 0;
	while(*cad != 0){
		contador++;
		cad++;
	}
	return contador;
}

char *potenciarCadena(char *cadena, int num, int digitos){
	int i = 0;
	int j = 0;
	int asignacion = 0;
	int size = (digitos*num) + 1;
	char *str = malloc(sizeof(char)*(size));
	for(i; i < num; i++){
		for(j=0; j < digitos; j++){
			*(str+asignacion) = *(cadena+j);
			asignacion++;
		}
	}
	str[size-1] = 0;
	return str;
}

double potency(double base, double exponent){
	double result = 1;	
	while (exponent != 0) {
        result *= base;
        --exponent;
    }
    return result;
}