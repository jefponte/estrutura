#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE !FALSE



typedef struct arvore{
	int info;
	struct arvore *esquerda;
	struct arvore *direita;
}Arvore;


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
    return arvore == NULL;
}


void imprimirArvore(Arvore *arvore){
    //printf("<");
    if(!vazia(arvore)){
        printf(" %d ", arvore->info);
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





int main(){


//    Arvore *a;
//	Arvore *a1;
//    Arvore *a2;
//    Arvore *a3;
//    Arvore *a4;
//    Arvore *a5;
//
//    a1 = criaRaiz(4, inicializa(), inicializa());
//    a2 = criaRaiz(2, inicializa(), a1);
//    a3 = criaRaiz(5, inicializa(), inicializa());
//    a4 = criaRaiz(6, inicializa(), inicializa());
//    a5 = criaRaiz(3, a3, a4);
//    a = criaRaiz(1, a2, a5);
//
//    imprimirArvore(a);



    Arvore *raiz;
    raiz = NULL;
    raiz = (Arvore*)malloc(sizeof(Arvore));
    raiz->info = 10;
    raiz->direita = NULL;
    raiz->esquerda = NULL;

    imprimirArvore(raiz);
	return 0;
}


