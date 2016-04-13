#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

Arvore* inicializa(){

    return NULL;
}


Arvore* criaRaiz(char info, Arvore *sae, Arvore *sad){
    Arvore *novo = (Arvore*)malloc(sizeof(Arvore));
    novo->info = info;
    novo->esquerda = sae;
    novo->direita = sad;
    return novo;
}



int vazia(Arvore *arvore){
    return arvore==NULL;
}

void imprimirArvore(Arvore *arvore){
    //printf("<");
    if(!vazia(arvore)){
        printf("%c", arvore->info);
        imprimirArvore(arvore->esquerda);
        imprimirArvore(arvore->direita);


    }
    //printf(">");

}
