#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE !FALSE


Arvore* inicializa(){

    return NULL;
}


Arvore* criaRaiz(int info, Arvore *sae, Arvore *sad){
    Arvore *novo = (Arvore*)malloc(sizeof(Arvore));
    novo->info = info;
    novo->esquerda = sae;
    novo->direita = sad;
    return novo;
}



int vazia(Arvore *arvore){
    if(arvore == NULL)
        return FALSE;
    else
        return TRUE;
}


void imprimirArvore(Arvore *arvore){
    //printf("<");
    if(!vazia(arvore)){
        printf("%d", arvore->info);
        imprimirArvore(arvore->esquerda);
        imprimirArvore(arvore->direita);
    }
    //printf(">");

}

void inserir(int item, Arvore *arvore) {

    if(arvore == NULL){
        printf("VOu alocar e inserir o item %d\n", item);
        arvore = (Arvore*)malloc(sizeof(Arvore));
        arvore->info = item;
        arvore->esquerda = NULL;
        arvore->direita = NULL;
    }else{
        if(item < arvore->info)
        {
            inserir(item, arvore->esquerda);

        }else{
            inserir(item, arvore->direita);
        }
    }
}
