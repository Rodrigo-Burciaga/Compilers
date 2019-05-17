#ifndef _MYLIB_H_
#define _MYLIB_H_

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

/**MANEJO DE TABLA DE SÍMBOLOS**/
void add(Lista *lista,TablaSimbolos tablaSimbolos);
void beginList(Lista *lista) ;
int empty(Lista *lista);
void imprimir(Lista *lista); 
int size(Lista *lista);
void printTable(TablaSimbolos *tabla);
TipoDato returnTipo(char *str);
void asignarTipo (TipoDato tipoDato, void *valor, TablaSimbolos *tablaSimbolos);
TablaSimbolos *buscarPorNombre(char *nombre, Lista *lista);
void printTipo(TablaSimbolos *tabla);
void printValor(TablaSimbolos *tabla);
void printVariable(char *var,  Lista *lista);
TablaSimbolos *copiarTabla(TablaSimbolos *tablaSimbolos);
int contarDigitos(char *s);
/**ASIGNACIONES**/
TablaSimbolos *declararExpAVariable(char *tipo, char *var, TablaSimbolos *tablaSimbolos);
TablaSimbolos *asignarExpAVariable(char *var, TablaSimbolos *tablaSimbolos);
TablaSimbolos *asignarEnteroAVar(char *var, int valor);
TablaSimbolos *asignarFlotanteAVar(char *var, float valor);
TablaSimbolos *asignarTextoAVar(char *var, char *valor);
void asignarACadena(TablaSimbolos *tabla, TablaSimbolos *tabla2);
void asignarAFlotante(TablaSimbolos *tabla, TablaSimbolos *tabla2);
void asignarAEntero(TablaSimbolos *tabla, TablaSimbolos *tabla2);
/** BISON **/
void yyerror(char *s);



	extern Lista lista;
	extern TablaSimbolos tabla;

#endif