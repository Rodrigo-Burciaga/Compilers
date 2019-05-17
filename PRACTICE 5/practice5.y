%{
#include <stdio.h>
#include <stdlib.h>
#include "tablasimbolos.h"
#include "operaciones.h"
#include <stdbool.h>
extern int yylex(void);
extern void yyerror(char *s);

char *falsoOVerdadero(unsigned int numero);
void crearTablaSimbolos(char *str, char *name);
void crearTablaSimbolosConValor(char *str, char *name, void *valor);
void comprobarSumaExpFloat(TablaSimbolos *tabla, float valor, int reverse);
void comprobarSumaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);
void comprobarSumaExp(TablaSimbolos *tabla, int valor, int reverse);
void comprobarRestaExp(TablaSimbolos *tabla, int valor, int inverse);
void negarValorTablaSimbolos(TablaSimbolos *tablaSimbolos);
void comprobarRestaExpFloat(TablaSimbolos *tabla, float valor, int inverse );
void comprobarRestaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);
void comprobarMultiplicacionExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);


#define INVERSE 1
#define NOT_INVERSE 0 
%}

%code requires {
    #include "tablasimbolos.h"
}
             
/* Declaraciones de BISON */
%union{
	int   entero;
	float flotante;
	char* cadena;
	unsigned int boolean;
	TablaSimbolos *tabla;
}

%token <entero> INTEGER
%token <flotante> DECIMAL
%token <cadena> CAD
%token <cadena> VAR
%token <cadena> TIPO
%token POW 
%token IF
%token PRINT

%type <entero> exp
%type <flotante> expFloat
%type <cadena> texto
%type <boolean> condition
%type <tabla> expVariable
%type <tabla> declarationVariable
%type <tabla> asignacionVariable

%left '='       
%left '+'  '-' 
%left '^'
%left '*' '/'
%left '(' ')'

             
/* Gramática */
%%
             
input:   /* cadena vacía */
        | input line 
;

line:   '\n'
		| exp '\n'  { printf ("\t\tresultado: %d\n\n", $1); }
		| expFloat '\n' { printf("\t\tflotante: %f\n", $1);}
        | texto '\n' { printf ("\t\tresultado: %s\n\n", $1); } 
        | condition '\n'{printf("\t\t%s\n", falsoOVerdadero($1));}
        | declarationVariable '\n' {}
        | imprimirTable '\n' {}
        | expVariable '\n' { 
        	if ($1 != NULL) {
        		printValor($1);
        	} else {
        		yyerror("No definido");
        	}
        	
        }
        | asignacionVariable {}
        
;
            
exp: 	INTEGER 						{ $$ = $1;				}
		| exp '+' exp        			{ $$ = $1 + $3; 		}
		| exp '*' exp       			{ $$ = $1 * $3;			}
		| exp '/' exp       			{ $$ = $1 / $3;			}
		| exp '-' exp		 			{ $$ = $1 - $3;			}	
		| '-' exp			 			{ $$ = -$2;				}
		| '(' exp ')'		 			{ $$ = $2;				}
		| POW '(' exp ',' exp ')'		{ $$ = potency($3, $5);	}
		| POW '(' exp ',' expFloat ')'	{ 
			int exponente  = $5;
			$$ = potency($3, exponente);
		}
		
;

expFloat:	DECIMAL { $$ = $1;}
			| expFloat '-' exp		 		{ $$ = $1 - $3;	}
			| exp '-' expFloat		 		{ $$ = $1 - $3;	}
			| expFloat '-' expFloat			{ $$ = $1 - $3;	}
			| expFloat '+' exp		 		{ $$ = $1 + $3;	}
			| exp '+' expFloat		 		{ $$ = $1 + $3;	}
			| expFloat '+' expFloat			{ $$ = $1 + $3;	}
			| expFloat '*' exp		 		{ $$ = $1 * $3;	}
			| exp '*' expFloat		 		{ $$ = $1 * $3;	}
			| expFloat '*' expFloat			{ $$ = $1 * $3;	}
			| expFloat '/' exp		 		{ $$ = $1 / $3;	}
			| exp '/' expFloat		 		{ $$ = $1 / $3;	}
			| expFloat '/' expFloat			{ $$ = $1 / $3;	}
			| '-' expFloat					{ $$ = -$2;	   	}
			| '(' expFloat ')'		 		{ $$ = $2;	   	}
			| POW '(' expFloat ',' exp ')'	{ $$ = potency($3, $5);}
			| POW '(' expFloat ',' expFloat ')'	{ 
				int exponente  = $5;
				$$ = potency($3, exponente);
			}


;
			
texto: 	CAD { $$ = $1;}
		| texto '+' texto  {
			$$ = concatenarCadenas($1,$3);
		}
		| texto '+' exp {
			char *str = convertToString($3);
			$$ = concatenarCadenas($1, str);
		}
		| exp '+' texto {
			char *str = convertToString($1);
			$$ = concatenarCadenas(str,$3);
		}
		| '(' texto ')'		{ $$ = $2; }
		| texto '^' exp {
					int nDigitos = contarDigitos($1);
					char *potencia = potenciarCadena($1, $3, nDigitos);
					$$ = potencia;
				}
;

condition: IF '(' exp '>' exp ')' ';' { 
				unsigned int num = ($3 > $5)? 1:0; 
				$$ = num;
			}
			| IF '(' exp '<' exp ')' ';' { 
				unsigned int num = ($3 < $5)? 1:0; 
				$$ = num;
			}
			| IF '(' expFloat '>' expFloat ')' ';' { 
				unsigned int num = ($3 > $5)? 1:0; 
				$$ = num;
			}
			| IF '(' expFloat '<' expFloat ')' ';' { 
				unsigned int num = ($3 < $5)? 1:0; 
				$$ = num;
			}
			| IF '(' expFloat '>' exp ')' ';' { 
				unsigned int num = ($3 > $5)? 1:0; 
				$$ = num;
			}
			| IF '(' expFloat '<' exp ')' ';' { 
				unsigned int num = ($3 < $5)? 1:0; 
				$$ = num;
			}
			| IF '(' exp '>' expFloat ')' ';' { 
				unsigned int num = ($3 > $5)? 1:0; 
				$$ = num;
			}
			| IF '(' exp '<' expFloat ')' ';' { 
				unsigned int num = ($3 < $5)? 1:0; 
				$$ = num;
			}
			| IF '('condition ')' ';' { 
				unsigned int num = ($3 == 1)? 1:0; 
				$$ = num;
			}

;

declarationVariable: 	TIPO VAR  ';' { 
							crearTablaSimbolos($1, $2);	
						}
						| TIPO VAR '=' exp ';' {
							crearTablaSimbolosConValor($1,$2, (void *) &($4)); 
						}	
						| TIPO VAR '=' expFloat ';' {
							crearTablaSimbolosConValor($1,$2, (void *) &($4)); 
						}	
						| TIPO VAR '=' texto ';' {
							int digitos =  contarDigitos($4);
							char *str = malloc(sizeof(char)*(digitos));
							str = $4;
							crearTablaSimbolosConValor($1,$2, (void *) str); 
						} 
						| TIPO VAR '=' expVariable ';' {
							$$ = declararExpAVariable($1, $2, $4); 
						}
;

asignacionVariable: 	VAR '=' expVariable ';' {
							$$ =  asignarExpAVariable($1, $3); 
						}
						| VAR '=' exp ';' {
							$$ = asignarEnteroAVar($1, $3); 
						}
						| VAR '=' expFloat ';' {
							$$ = asignarFlotanteAVar($1, $3);
						}
						| VAR '=' texto ';' {
							$$ = asignarTextoAVar($1, $3);
						}

;

expVariable: 			VAR	{
							TablaSimbolos *tablaSimbolos = buscarPorNombre($1, &lista);
							if (tablaSimbolos!= NULL) {
								TablaSimbolos *copia = copiarTabla(tablaSimbolos);
								$$ = copia;
							} else {
								$$ = NULL;
							}	
						}
						| '-' expVariable {
							negarValorTablaSimbolos($2);
							$$ = $2;
						}
						| expVariable '+' exp {
							comprobarSumaExp($1, $3, 0);
							$$ = $1;
						}
						| expVariable '+' expFloat {
							comprobarSumaExpFloat($1, $3, 0);
							$$ = $1;
						}
						|  exp '+' expVariable {
							comprobarSumaExp($3, $1, 1);
							$$ = $3;
						}
						| expFloat '+' expVariable {
							comprobarSumaExpFloat($3, $1, 1);
							$$ = $3;
						}
						| expVariable '+' texto {
							comprobarSumaTexto($1,$3, NOT_INVERSE);
							$$ = $1;
						}
						| texto '+' expVariable {
							comprobarSumaTexto($3,$1, INVERSE);
							$$ = $3;
						}
						| expVariable '+' expVariable {
							comprobarSumaExpresiones($1,$3);
							$$ = $1;
						}
						| expVariable '-' exp {
							comprobarRestaExp($1,$3, NOT_INVERSE);
							$$ = $1;
						}
						| exp '-' expVariable {
							comprobarRestaExp($3,$1, INVERSE);
							$$ = $3;
						}
						| expVariable '-' expFloat {
							comprobarRestaExpFloat($1,$3, NOT_INVERSE);
							$$ = $1;
						}
						| expFloat '-' expVariable {
							comprobarRestaExpFloat($3,$1, INVERSE);
							$$ = $3;
						}
						| expVariable '-' expVariable {
							comprobarRestaExpresiones($1,$3);
							$$ = $1;
						}
						| expVariable '*' exp {
							comprobarMultiplicacionExp($1,$3);
							$$ = $1;
						}
						| exp '*' expVariable {
							comprobarMultiplicacionExp($3,$1);
							$$ = $3;
						}
						| expVariable '*' expFloat {
							comprobarMultiplicacionExpFloat($1,$3);
							$$ = $1;
						}
						| expFloat '*' expVariable {
							comprobarMultiplicacionExpFloat($3,$1);
							$$ = $3;
						}
						| expVariable '*' expVariable {
							comprobarMultiplicacionExpresiones($1, $3);
							$$ = $1;
						}
						| expVariable '/' exp {
							comprobarDivisionExp($1,$3, NOT_INVERSE);
							$$ = $1;
						}
						| exp '/' expVariable {
							comprobarDivisionExp($3,$1, INVERSE);
							$$ = $3;
						}
						| expVariable '/' expFloat {
							comprobarDivisionExpFloat($1,$3, NOT_INVERSE);
							$$ = $1;
						}
						| expFloat '/' expVariable {
							comprobarDivisionExpFloat($3,$1, INVERSE);
							$$ = $3;
						}
						| expVariable '/' expVariable {
							comprobarDivisionExpresiones($1, $3);
							$$ = $1;
						}

						| POW '(' expVariable ',' exp ')' { 
							comprobarPotenciaExp($3,$5);
							$$ = $3;
						}

						| POW '(' expVariable ',' expFloat ')'	{ 
							comprobarPotenciaExpFloat($3,$5);
							$$ = $3;
						}
						| POW '(' expVariable ',' expVariable ')'	{ 
							comprobarPotenciaExpresiones($3,$5);
							$$ = $3;
						}
						| expVariable '^' exp {
							potencyStringExpVariable($1, $3); 
							$$ = $1;
						}
						| expVariable '^' expVariable {
							if ($3->tipoDato == FLOTANTE) {
								int cast = $3->valor.flotante;
								potencyStringExpVariable($1, cast); 
							} else if ($3->tipoDato == ENTERO) {
								potencyStringExpVariable($1, $3->valor.entero); 
							} else {
								yyerror("No permitido");
								exit(-1);
							}
							$$ = $1;
						}
						| '(' expVariable ')' { $$ = $2; }

;

imprimirTable:	PRINT { imprimir(&lista); }

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




char *falsoOVerdadero(unsigned int numero){
	char *boolean = (numero == 0)? "false" : "true";
	return boolean;
}


/******
	Símbolos
*****/

void crearTablaSimbolos(char *str, char *name) {
	TablaSimbolos *tabla = buscarPorNombre(name, &lista);
	if (tabla == NULL) {
		int id = size(&lista) + 1;
		TablaSimbolos tabla;
		tabla.id = id;
		tabla.tipoDato = returnTipo(str);
		if(tabla.tipoDato == CADENA) {
			tabla.valor.cadena =  NULL;
		}
		tabla.lexem = name;
		add(&lista, tabla);
		printf("\t\tAgregado a la tabla de símbolos\n"); 
		//printTable(&tabla);	}
	} else {
		yyerror("variable antes añadida");
	}
	
}

void crearTablaSimbolosConValor(char *str, char *name, void *valor) {
	TablaSimbolos *tabla = buscarPorNombre(name, &lista);
	if (tabla == NULL) {
		int id = size(&lista) + 1;
		TablaSimbolos tabla;
		tabla.id = id;
		tabla.tipoDato = returnTipo(str);
		asignarTipo(tabla.tipoDato, valor, &tabla);
		tabla.lexem = name;
		add(&lista, tabla);
		printf("\t\tAgregado a la tabla de símbolos\n"); 
		//printTable(&tabla);
	} else {
		yyerror("Variable antes añadida");
	}
	
}

/**** OPERACIONES TABLA SÍMBOLOS *****/


void negarValorTablaSimbolos(TablaSimbolos *tablaSimbolos) {
	if (tablaSimbolos!= NULL) {
		if (tablaSimbolos->tipoDato == ENTERO) {
			tablaSimbolos->valor.entero = -tablaSimbolos->valor.entero;
		} else if (tablaSimbolos->tipoDato == FLOTANTE) {
			tablaSimbolos->valor.flotante = -tablaSimbolos->valor.flotante;
		} else {
			yyerror("operacion no permitida");
		}
	}
}

void comprobarSumaExp(TablaSimbolos *tabla, int valor, int reverse) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			tabla->valor.entero = tabla->valor.entero + valor;
		} else if(tabla->tipoDato == FLOTANTE){
			tabla->valor.flotante = tabla->valor.flotante + valor;
		} else if (tabla->tipoDato == CADENA) {
			if (tabla->valor.cadena == NULL){
				tabla->valor.cadena = "";
			}
			char *str = convertToString(valor);
			if (reverse){
				tabla->valor.cadena = concatenarCadenas(str, tabla->valor.cadena);
			} else {
				tabla->valor.cadena = concatenarCadenas(tabla->valor.cadena, str);
			}
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarRestaExp(TablaSimbolos *tabla, int valor, int inverse ) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			if (inverse) {
				printf("%s, %d\n", "yei", valor);
				tabla->valor.entero = valor - tabla->valor.entero ;
			} else {
				tabla->valor.entero = tabla->valor.entero - valor;
			}	
		} else if(tabla->tipoDato == FLOTANTE){
			if (inverse) {
				tabla->valor.flotante = valor - tabla->valor.flotante ;
			} else {
				tabla->valor.flotante = tabla->valor.flotante - valor;
			}	
		} else {
			yyerror("No permitido");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarSumaExpFloat(TablaSimbolos *tabla, float valor, int reverse) {
	if (tabla != NULL) {
		if (tabla->tipoDato == ENTERO){
			tabla->tipoDato = FLOTANTE;
			tabla->valor.flotante = tabla->valor.entero + valor;
		} else if(tabla->tipoDato == FLOTANTE){
			tabla->valor.flotante = tabla->valor.flotante + valor;
		} else if (tabla->tipoDato == CADENA) {
			if (tabla->valor.cadena == NULL){
				tabla->valor.cadena = "";
			}	
			int cast = valor;
			char *str = convertToString(cast);
			if (reverse){
				tabla->valor.cadena = concatenarCadenas(str, tabla->valor.cadena);
			} else {
				tabla->valor.cadena = concatenarCadenas(tabla->valor.cadena, str);
			}
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarRestaExpFloat(TablaSimbolos *tabla, float valor, int inverse ) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			tabla->tipoDato = FLOTANTE;
			if (inverse) {
				tabla->valor.flotante = valor - tabla->valor.entero ;
			} else {
				tabla->valor.flotante = tabla->valor.entero - valor;
			}	
		} else if(tabla->tipoDato == FLOTANTE){
			if (inverse) {
				tabla->valor.flotante = valor - tabla->valor.flotante ;
			} else {
				tabla->valor.flotante = tabla->valor.flotante - valor;
			}	
		} else {
			yyerror("No permitido");
		}
	} else {
		yyerror("No definido");
	}
	
}

void comprobarSumaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	if (tabla!=NULL && tabla2 != NULL) {
		if (tabla2->tipoDato == ENTERO) {
			comprobarSumaExp(tabla, tabla2->valor.entero, 0);
		} else if(tabla2->tipoDato == FLOTANTE) {
			comprobarSumaExpFloat(tabla,tabla2->valor.flotante,0);
		} else if (tabla2->tipoDato == CADENA) {
			comprobarSumaTexto(tabla, tabla2->valor.cadena, NOT_INVERSE);
		}
	} else {
		yyerror("No definido");
	}
}

void comprobarRestaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	if (tabla!=NULL && tabla2 != NULL) {
		if (tabla2->tipoDato == ENTERO) {
			comprobarRestaExp(tabla, tabla2->valor.entero, 0);
		} else if(tabla2->tipoDato == FLOTANTE) {
			comprobarRestaExpFloat(tabla,tabla2->valor.flotante,0);
		} else if (tabla2->tipoDato == CADENA) {
			yyerror("No permitido");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}




