#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

int main(){

    Arvore *a;
	Arvore *a1;
    Arvore *a2;
    Arvore *a3;
    Arvore *a4;
    Arvore *a5;

    a1 = criaRaiz('d', inicializa(), inicializa());
    a2 = criaRaiz('b', inicializa(), a1);
    a3 = criaRaiz('e', inicializa(), inicializa());
    a4 = criaRaiz('f', inicializa(), inicializa());
    a5 = criaRaiz('c', a3, a4);
    a = criaRaiz('a', a2, a5);

    imprimirArvore(a);
	return 0;
}
