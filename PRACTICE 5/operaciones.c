#include "operaciones.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define INVERSE 1
#define NOT_INVERSE 0 


/*** CADENAS *****/
char *concatenarCadenas(char *cad1, char *cad2) {
	int texto1 = contarDigitos(cad1);
	int texto2 = contarDigitos(cad2);
	char *s = malloc(sizeof(char)*(texto1 + texto2 + 1));
	int i=0;
	for(i;i < texto1; i++){
		*(s+i) = *cad1++;
	}
	for(i;i < (texto1 + texto2); i++){
		*(s+i) = *cad2++;
	}
	return s;
}

char *convertToString(int number){
	char buffer[50];
	int i = 0;

	bool isNeg = number < 0;

	unsigned int n1 = isNeg ? -number : number;

	while(n1!=0)
	{
	    buffer[i++] = n1%10+'0';
	    n1=n1/10;
	}

	if(isNeg)
	    buffer[i++] = '-';

	buffer[i] = '\0';

	for(int t = 0; t < i/2; t++)
	{
	    buffer[t] ^= buffer[i-t-1];
	    buffer[i-t-1] ^= buffer[t];
	    buffer[t] ^= buffer[i-t-1];
	}

	if(number == 0)
	{
	    buffer[0] = '0';
	    buffer[1] = '\0';
	}  

	int size = contarDigitos(buffer) +1;
	char *s = malloc(sizeof(char)*(size));
	for (i=0; buffer[i] != 0; i++){
		*(s+i) = buffer[i];
	}
	*(s+i) = '\0';
	return s;

}


/***** OPERACIONES CON EXPRESIONES *******/

			/** CADENAS **/

void comprobarSumaTexto(TablaSimbolos *tablaSimbolos, char *str, int inverse){
	if(tablaSimbolos != NULL){
		if (tablaSimbolos->tipoDato == CADENA) {
			if (inverse) {
				tablaSimbolos->valor.cadena = concatenarCadenas(str, tablaSimbolos->valor.cadena);
			} else {
				tablaSimbolos->valor.cadena = concatenarCadenas(tablaSimbolos->valor.cadena, str);
			}
		} else if (tablaSimbolos->tipoDato == ENTERO) {
			tablaSimbolos->tipoDato  = CADENA;
			char *cast = convertToString(tablaSimbolos->valor.entero);
			if (inverse) {
				tablaSimbolos->valor.cadena = concatenarCadenas(str,cast);
			} else {
				tablaSimbolos->valor.cadena = concatenarCadenas(cast, str);
			}
		} else if (tablaSimbolos->tipoDato == FLOTANTE) {
			tablaSimbolos->tipoDato  = CADENA;
			int cast = tablaSimbolos->valor.flotante;
			char *cadena = convertToString(cast);
			if (inverse) {
				tablaSimbolos->valor.cadena = concatenarCadenas(str, cadena);
			} else {
				tablaSimbolos->valor.cadena = concatenarCadenas(cadena, str);
			}
			
		}
	} else {
		yyerror("No definido");
	}
}


				/*** MULTIPLICACION ***/

void comprobarMultiplicacionExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	if (tabla!=NULL && tabla2 != NULL) {
		if (tabla2->tipoDato == ENTERO) {
			comprobarMultiplicacionExp(tabla, tabla2->valor.entero);
		} else if(tabla2->tipoDato == FLOTANTE) {
			comprobarMultiplicacionExpFloat(tabla,tabla2->valor.flotante);
		} else if (tabla2->tipoDato == CADENA) {
			yyerror("no permitido");
		}
	} else {
		yyerror("No definido");
	}
}

void comprobarMultiplicacionExp(TablaSimbolos *tabla, int valor) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			tabla->valor.entero = tabla->valor.entero * valor;
		} else if(tabla->tipoDato == FLOTANTE) {
			tabla->valor.flotante = tabla->valor.flotante * valor;
		} else {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}

void comprobarMultiplicacionExpFloat(TablaSimbolos *tabla, float valor) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			tabla->tipoDato = FLOTANTE;
			tabla->valor.flotante = tabla->valor.entero * valor;
		} else if(tabla->tipoDato == FLOTANTE) {
			tabla->valor.flotante = tabla->valor.flotante * valor;
		} else {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}

			/**** DIVISION ****/

void comprobarDivisionExp(TablaSimbolos *tabla, int valor, int inverse) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			if (inverse){
				tabla->valor.entero = valor / tabla->valor.entero;
			} else {
				tabla->valor.entero = tabla->valor.entero / valor;
			}
		} else if (tabla->tipoDato == FLOTANTE) {
			if (inverse){
				tabla->valor.flotante = valor / tabla->valor.flotante;
			} else {
				tabla->valor.flotante = tabla->valor.flotante / valor;
			}
		} else {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}


void comprobarDivisionExpFloat(TablaSimbolos *tabla, float valor, int inverse) {
	if (tabla!= NULL) {
		if (tabla->tipoDato == ENTERO) {
			tabla->tipoDato = FLOTANTE;
			if (inverse){
				tabla->valor.flotante = valor / tabla->valor.entero;
			} else {
				tabla->valor.flotante = tabla->valor.entero / valor;
			}
		} else if (tabla->tipoDato == FLOTANTE) {
			if (inverse){
				tabla->valor.flotante = valor / tabla->valor.flotante;
			} else {
				tabla->valor.flotante = tabla->valor.flotante / valor;
			}
		} else {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}

void comprobarDivisionExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	if (tabla!=NULL && tabla2 != NULL) {
		if (tabla2->tipoDato == ENTERO) {
			comprobarDivisionExp(tabla, tabla2->valor.entero,NOT_INVERSE);
		} else if(tabla2->tipoDato == FLOTANTE) {
			comprobarDivisionExpFloat(tabla,tabla2->valor.flotante, NOT_INVERSE);
		} else if (tabla2->tipoDato == CADENA) {
			yyerror("no permitido");
		}
	} else {
		yyerror("No definido");
	}
}


		/** POTENCIA **/
void comprobarPotenciaExp(TablaSimbolos *tablaSimbolos, int exponente){
	if (tablaSimbolos != NULL) {
		if (tablaSimbolos->tipoDato == ENTERO) {
			tablaSimbolos->valor.entero = potency(tablaSimbolos->valor.entero, exponente);
		} else if (tablaSimbolos->tipoDato == FLOTANTE) {
			tablaSimbolos->valor.flotante = potency(tablaSimbolos->valor.flotante, exponente);
		} else {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}

void comprobarPotenciaExpFloat(TablaSimbolos *tablaSimbolos, float exponente){
	if (tablaSimbolos != NULL) {
		int castExponente  = exponente;
		if (tablaSimbolos->tipoDato == ENTERO) {
			tablaSimbolos->valor.entero = potency(tablaSimbolos->valor.entero, castExponente);
		} else if (tablaSimbolos->tipoDato == FLOTANTE) {
			tablaSimbolos->valor.flotante = potency(tablaSimbolos->valor.flotante, castExponente);
		} else {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}

double potency(double base, double exponent){
	double result = 1;	
	while (exponent != 0) {
        result *= base;
        --exponent;
    }
    return result;
}

void comprobarPotenciaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	if (tabla!=NULL && tabla2 != NULL) {
		if (tabla2->tipoDato == ENTERO) {
			comprobarPotenciaExp(tabla, tabla2->valor.entero);
		} else if(tabla2->tipoDato == FLOTANTE) {
			comprobarPotenciaExpFloat(tabla,tabla2->valor.flotante);
		} else if (tabla2->tipoDato == CADENA) {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
}

void potencyStringExpVariable(TablaSimbolos *tabla, int valor) {
	if (tabla!=NULL) {
		if (tabla->tipoDato == CADENA && tabla->valor.cadena != NULL){
			int nDigitos = contarDigitos(tabla->valor.cadena);
			tabla->valor.cadena = potenciarCadena(tabla->valor.cadena, valor, nDigitos);
		} else {
			yyerror("operacion no permitida");
			exit(-1);
		}
	} else {
		yyerror("No definido");
	}
	
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