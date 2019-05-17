#include <stdio.h>
#include <stdlib.h>

typedef enum {ENTERO, FLOTANTE, CADENA} TipoDato;

typedef union {
   		int entero;
   		float flotante;
   		char *cadena;
} Data;

struct nodo{
	int id;
	TipoDato tipoDato;
	Data valor;
	char *lexem;
	struct nodo *sig;
	struct nodo *ant;
};

typedef struct nodo TablaSimbolos;

typedef struct {
	TablaSimbolos *primero;
	TablaSimbolos *ultimo;
	
} Lista;


void add(Lista *lista,TablaSimbolos tablaSimbolos);
void beginList(Lista *lista) ;
int empty(Lista *lista);
void imprimir(Lista *lista);

/** **/
int main(int argc, char const *argv[])
{
	Lista lista;
	beginList(&lista);
	TablaSimbolos tabla;
	tabla.id = 1;
	tabla.tipoDato = FLOTANTE;
	tabla.valor.flotante = 12.5;
	tabla.lexem = "var1";

	add(&lista, tabla);

	tabla.id = 2;
	tabla.tipoDato = ENTERO;
	tabla.valor.entero = 14;
	tabla.lexem = "var2";
	
	add(&lista, tabla);

	imprimir(&lista);	
	
	return 0;
}


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
		printf("\nLa tabla de símbolos contiene:\n\n");
		tabla=lista->primero;
		while(tabla!=NULL)
		{
			printf("Id : %d\n", tabla->id);
			z
			switch (tabla->tipoDato){
				case ENTERO:
					printf("%d\n",tabla->valor.entero);
					break;
				case FLOTANTE:
					printf("%f\n",tabla->valor.flotante);
					break;
				case CADENA:
					printf("%s\n",tabla->valor.cadena);
					break;
			}
			printf("lexema: %s\n", tabla->lexem);
			printf("-----------------------------\n");
			tabla=tabla->sig;
			
		}
	} else
	printf("La lista esta vacia");
}
