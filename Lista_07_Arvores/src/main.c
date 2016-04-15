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

Arvore* inserir(int item, Arvore *arvore) {

    if(arvore == NULL){

        arvore = (Arvore*)malloc(sizeof(Arvore));
        arvore->info = item;
        arvore->esquerda = NULL;
        arvore->direita = NULL;
        return arvore;
    }else{
        if(item < arvore->info)
        {
            arvore->esquerda = inserir(item, arvore->esquerda);
            return arvore;
        }else{

            arvore->direita = inserir(item, arvore->direita);
            return arvore;
        }
    }

}


Arvore* liberaArvore(Arvore*a){
	if(!vazia(a)){
		liberaArvore(a->esquerda);
		liberaArvore(a->direita);
		free(a);
	}
	return NULL;
}

int main(){
    Arvore *raiz = inicializa();
    raiz = inserir(14, raiz);
    raiz = inserir(10, raiz);
    raiz = inserir(3, raiz);
    raiz = inserir(2, raiz);
    raiz = inserir(20, raiz);
    imprimirArvore(raiz);
    liberaArvore(raiz);
	return 0;
}


