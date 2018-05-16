#ifndef FilaSE_H
#define FilaSE_H
#define SUCESSO 0
#define FILA_VAZIA 1
#define FALTOU_MEMORIA 2

typedef struct nodo Nodo;
struct nodo {
	int info;
	Nodo *prox;
};
typedef struct {
	Nodo *frente;
	Nodo *re;
} Fila;

void criaFila(Fila *f);
int retira(Fila *f,int *d);
int consulta(Fila f,int *d);
int insere(Fila *f,int d);
int estaVazia(Fila f);
 

#endif

