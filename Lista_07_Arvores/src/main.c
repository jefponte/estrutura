#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    /*
    Arvore *a;
	Arvore *a1;
    Arvore *a2;
    Arvore *a3;
    Arvore *a4;
    Arvore *a5;

    a1 = criaRaiz(4, inicializa(), inicializa());
    a2 = criaRaiz(2, inicializa(), a1);
    a3 = criaRaiz(5, inicializa(), inicializa());
    a4 = criaRaiz(6, inicializa(), inicializa());
    a5 = criaRaiz(3, a3, a4);
    a = criaRaiz(1, a2, a5);

    imprimirArvore(a);
    */


    Arvore *raiz;
    raiz = NULL;
    raiz = (Arvore*)malloc(sizeof(Arvore));
    raiz->info = 10;
    raiz->direita = NULL;
    raiz->esquerda = NULL;

    imprimirArvore(raiz);
	return 0;
}


