#include "arvore.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* Isto é um comentário */

struct arvno {
	char info;
	ArvNo* esq;
	ArvNo* dir;
};

struct arv{
	ArvNo* raiz;	
};	


ArvNo* arv_criano(char c, ArvNo* esq, ArvNo* dir){
	ArvNo* p = (ArvNo*) malloc (sizeof(ArvNo));
	p->info = c;
	p->esq = esq;
	p->dir = dir;
	return p;
}


Arv* arv_cria(ArvNo* r){
	Arv* a = (Arv*) malloc (sizeof (Arv));
	a->raiz = r;
	return a;
}	

void imprime(ArvNo* r){
	printf("<");
	if ( r!= NULL){
		printf("%c ", r->info);
		imprime(r->esq);
		imprime(r->dir);
	}	
	printf(">");
	
}	

void arv_imprime( Arv* a){
	imprime(a->raiz);
}	

void libera (ArvNo* r){
	if ( r!= NULL){
		libera(r->esq);
		libera(r->dir);
		free(r);
	}	
}	

void arv_libera(Arv* a){
	libera(a->raiz);
	free(a);
}	

int pertence( ArvNo* r, char c){
	if ( r == NULL)
		return 0;
	else
		return c ==r->info || pertence(r->esq,c) || pertence(r->dir,c);
}	

int arv_pertence( Arv* a, char c){
	return pertence(a->raiz,c);	
}	

ArvNo* busca(ArvNo* r, char c){
	if ( r == NULL)
		return NULL;
	else if ( c == r->info)
		return r;
	else{
		ArvNo* p = busca(r->esq,c);
		if (p!=NULL)
			return p;
		else
			return busca(r->dir,c);
	}
}	

ArvNo* arv_busca( Arv* a, char c){
	return busca(a->raiz, c);
}	