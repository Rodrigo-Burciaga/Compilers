#include "tablasimbolos.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

Lista lista;
TablaSimbolos tabla;
    
void beginList(Lista *lista) {
	lista->primero=lista->ultimo=NULL;
}

int empty(Lista *lista) {
	return ((*lista).primero==NULL);
}

void add(Lista *lista,TablaSimbolos tablaSimbolos)
{
	TablaSimbolos *aux;
	aux=(TablaSimbolos*)malloc(sizeof(TablaSimbolos));
	aux->id=tablaSimbolos.id;
	aux->tipoDato = tablaSimbolos.tipoDato;
	aux->valor = tablaSimbolos.valor;
	aux->lexem = tablaSimbolos.lexem;
	
	aux->sig=NULL;
	aux->ant=NULL;
	if(empty(lista))
	{
		lista->primero=aux;
		lista->ultimo=aux;
	}

	else
	{
		lista->ultimo->sig=aux;

		aux->ant=lista->ultimo;//La nueva estructura apunta a la estructura anterior

		lista->ultimo=aux;//la nueva estructuraa se convierte en la ultima

	}
}

void imprimir(Lista *lista)
{
	TablaSimbolos *tabla;
	if(lista->primero!=NULL)
	{
		printf("\n\t\tLa tabla de símbolos contiene:\n\n");
		tabla=lista->primero;
		while(tabla!=NULL)
		{
			printTable(tabla);
			tabla=tabla->sig;
			
		}
	} else
	printf("\tLa lista esta vacia\n");
}

int size(Lista *lista){
	TablaSimbolos *tabla;
	int contador = 0;
	if(lista->primero!=NULL) {
		tabla=lista->primero;
		while(tabla!=NULL)
		{
			contador++;
			tabla=tabla->sig;		
		}
	} 
	return contador;
}


void printTable(TablaSimbolos *tabla) {
	printf("\t\tId : %d\n", tabla->id);
	printTipo(tabla);
	printf("\t\tlexema: %s\n", tabla->lexem);
	printf("\t\t-----------------------------\n");
}

void printTipo(TablaSimbolos *tabla){
	switch (tabla->tipoDato){
		case ENTERO:
			printf("\t\tTipo: entero\n");
			printf("\t\tValor: %d\n",tabla->valor.entero);
			break;
		case FLOTANTE:
			printf("\t\tTipo: flotante\n");
			printf("\t\tValor: %f\n",tabla->valor.flotante);
			break;
		case CADENA:
			printf("\t\tTipo: cadena\n");
			printf("\t\tValor: %s\n",tabla->valor.cadena);
			break;
	}
}

void printValor(TablaSimbolos *tabla){
	switch (tabla->tipoDato){
		case ENTERO:
			printf("\t\t%d\n",tabla->valor.entero);
			break;
		case FLOTANTE:
			printf("\t\t%f\n",tabla->valor.flotante);
			break;
		case CADENA:
			printf("\t\t%s\n",tabla->valor.cadena);
			break;
	}
}

TipoDato returnTipo(char *str){
	if (strcmp(str, "int") == 0){
		return ENTERO;
	} else if (strcmp(str, "string") == 0) {
		return CADENA;
	} else if (strcmp(str, "float") == 0) {
		return FLOTANTE;
	}
}

void asignarTipo(TipoDato tipoDato, void *valor, TablaSimbolos *tablaSimbolos) {
	switch(tipoDato){
		case ENTERO:
			tablaSimbolos->valor.entero = *(int *)valor;
			break;
		case FLOTANTE:
			tablaSimbolos->valor.flotante = *(float *)valor;
			break;
		case CADENA:
			tablaSimbolos->valor.cadena = (char *)valor;
			break;
	}
}

TablaSimbolos *buscarPorNombre(char *nombre,Lista *lista){
	TablaSimbolos *tabla = NULL;
	if(lista->primero!=NULL) {
		tabla=lista->primero;
		while(tabla!=NULL) {
			if(strcmp(tabla->lexem,nombre) == 0){
				return tabla;
			}
			tabla=tabla->sig;
		}
		return NULL;
	} else {
		return NULL;
	}
}

void printVariable(char *var, Lista *lista) {
	TablaSimbolos *tabla = buscarPorNombre(var,lista);
	if (tabla!= NULL)
	{
		printTipo(tabla);
		return;
	}
	printf("\t\t%s no está definido\n",var);
}

int contarDigitos(char *cad){
	int contador = 0;
	while(*cad != 0){
		contador++;
		cad++;
	}
	return contador;
}

TablaSimbolos *copiarTabla(TablaSimbolos *tablaSimbolos){
	TablaSimbolos *aux;
	aux=(TablaSimbolos*)malloc(sizeof(TablaSimbolos));
	int id = tablaSimbolos->id;
	aux->id = id;
	aux->tipoDato = tablaSimbolos->tipoDato;
	aux->valor = tablaSimbolos->valor;
	int size = contarDigitos(tablaSimbolos->lexem);
	aux->lexem =  malloc(sizeof(char)*(size));
	aux->lexem = tablaSimbolos->lexem;
	aux->sig=NULL;
	aux->ant=NULL;
	return aux;
}

TablaSimbolos *declararExpAVariable(char *tipo, char *var, TablaSimbolos *tablaSimbolos) {
	TablaSimbolos *tabla = buscarPorNombre(var, &lista);
	if (tabla == NULL && tablaSimbolos != NULL) {
		TablaSimbolos *tablaNueva = (TablaSimbolos*)malloc(sizeof(TablaSimbolos));
		int id = size(&lista) + 1;
		tablaNueva->id = id;
		TipoDato tipoDato = returnTipo(tipo);
		tablaNueva->tipoDato = tipoDato;
		tablaNueva->lexem = var;
		if (tipoDato == ENTERO){
			asignarAEntero(tablaNueva, tablaSimbolos);
		} else if (tipoDato == FLOTANTE) {
			asignarAFlotante(tablaNueva, tablaSimbolos);
		} else {
			asignarACadena(tablaNueva, tablaSimbolos);
		}
		add(&lista, *tablaNueva);
		return tablaNueva;
	} else {
		yyerror("Variable antes añadida");
	}
}


TablaSimbolos *asignarExpAVariable(char *var, TablaSimbolos *tablaSimbolos) {
	TablaSimbolos *tabla = buscarPorNombre(var, &lista);
	if (tabla != NULL) {
		if (tabla->tipoDato == ENTERO) {
			asignarAEntero(tabla, tablaSimbolos);
		} else if (tabla->tipoDato == FLOTANTE) {
			asignarAFlotante(tabla, tablaSimbolos);
		} else {
			asignarACadena(tabla, tablaSimbolos);
		}
		return tabla;
	} else {
		yyerror("No definido");
	}
}


void asignarAEntero(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	int valor;
	if (tabla2->tipoDato == FLOTANTE) {
		valor = tabla2->valor.flotante;
		tabla->valor.entero = valor;
	} else if (tabla2->tipoDato == ENTERO){
		valor = tabla2->valor.entero;
		tabla->valor.entero = valor;
	} else {
		yyerror("No se puede asignar");
	}
}

void asignarAFlotante(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	float valor;
	if (tabla2->tipoDato == FLOTANTE) {
		valor = tabla2->valor.flotante;
		tabla->valor.flotante = valor;
	} else if (tabla2->tipoDato == ENTERO){
		valor = tabla2->valor.entero;
		tabla->valor.flotante = valor;
	} else {
		yyerror("No se puede asignar");
	}
}

void asignarACadena(TablaSimbolos *tabla, TablaSimbolos *tabla2) {
	int digitos =  contarDigitos(tabla2->valor.cadena);
	char *str = malloc(sizeof(char)*(digitos));
	if (tabla2->tipoDato == CADENA) {
		str =  tabla2->valor.cadena;
		tabla->valor.cadena = str;
	} else {
		yyerror("No se puede asignar");
	}
}

TablaSimbolos *asignarEnteroAVar(char *var, int valor) {
	TablaSimbolos *tablaSimbolos = buscarPorNombre(var, &lista);
	if (tablaSimbolos != NULL) {
		if(tablaSimbolos->tipoDato == CADENA){
			yyerror("No se puede asignar");
		} else if (tablaSimbolos->tipoDato == FLOTANTE) {
			tablaSimbolos->valor.flotante = valor;
		} else {
			tablaSimbolos->valor.entero = valor;
		}	
		return tablaSimbolos;							
	} else {
		yyerror("No definido");
	}
}

TablaSimbolos *asignarFlotanteAVar(char *var, float valor) {
	TablaSimbolos *tablaSimbolos = buscarPorNombre(var, &lista);
	if (tablaSimbolos != NULL) {
		if(tablaSimbolos->tipoDato == CADENA){
			yyerror("No se puede asignar");
		} else if (tablaSimbolos->tipoDato == FLOTANTE) {
			tablaSimbolos->valor.flotante = valor;
		} else {
			tablaSimbolos->valor.entero = valor;
		}	
		return tablaSimbolos;							
	} else {
		yyerror("No definido");
	}
}

TablaSimbolos *asignarTextoAVar(char *var, char *valor) {
	TablaSimbolos *tablaSimbolos = buscarPorNombre(var, &lista);
	if (tablaSimbolos != NULL) {
		if(tablaSimbolos->tipoDato != CADENA){
			yyerror("No se puede asignar");
		} else  {
			tablaSimbolos->valor.cadena = valor;
		} 
		return tablaSimbolos;							
	} else {
		yyerror("No definido");
	}
}