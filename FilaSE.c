#include<stdio.h>
#include<stdlib.h>
#include "FilaSE.h"

void criaFila(Fila *f){
	f->frente=NULL;
	f->re=NULL;
}
int retira(Fila *f,int *d){
	
}
int consulta(Fila f,int *d){
	
}
int insere(Fila *f,int d){
	Nodo *pNodo;
	pNodo=(Nodo*) malloc(sizeof (Nodo));
	if(pNodo==NULL){
		return FALTOU_MEMORIA;
	}
	pNodo->info=d;
	if(estaVazia(*f)==FILA_VAZIA){
		pNodo=f->re;
		f->frente=f->re;
		return SUCESSO;
	}else{
		pNodo->prox=f->re;
		f->re=pNodo;
		
		return SUCESSO;
			
	}
}
int estaVazia(Fila f){
	if(f.frente==NULL&&f.re==NULL){
		return FILA_VAZIA;
	}
	return SUCESSO;
}
