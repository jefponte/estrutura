#include "arvore.h"
#include <stdio.h>
#include <stdlib.h>

Arvore* inicializa(){

    return NULL;
}


Arvore* criaRaiz(char info, Arvore *sae, Arvore *sad){
    Arvore *novo = (Arvore*)malloc(sizeof(Arvore));
    novo->esquerda = sae;
    novo->direita = sad;


}
