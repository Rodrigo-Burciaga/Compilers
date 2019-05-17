#ifndef _MYLIB1_H_
#define _MYLIB1_H_

#include "tablasimbolos.h"

/** CADENAS **/
void comprobarSumaTexto(TablaSimbolos *tablaSimbolos, char *str, int inverse);
char *concatenarCadenas(char *texto1, char *texto2);
char *convertToString(int number);
char *potenciarCadena(char *cadena, int num, int digitos);
void potencyStringExpVariable(TablaSimbolos *tabla, int valor);
/** MULTIPLICACION **/
void comprobarMultiplicacionExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);
void comprobarMultiplicacionExp(TablaSimbolos *tabla, int valor) ;
void comprobarMultiplicacionExpFloat(TablaSimbolos *tabla, float valor);
/** DIVISION **/
void comprobarDivisionExp(TablaSimbolos *tabla, int valor, int inverse);
void comprobarDivisionExpFloat(TablaSimbolos *tabla, float valor, int inverse);
void comprobarDivisionExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2) ;
/** POTENCIA **/
void comprobarPotenciaExpFloat(TablaSimbolos *tablaSimbolos, float exponente);
void comprobarPotenciaExp(TablaSimbolos *tablaSimbolos, int exponente);
double potency(double base, double exponent);
void comprobarPotenciaExpresiones(TablaSimbolos *tabla, TablaSimbolos *tabla2);
/** BISON **/
void yyerror(char *s);

#endif