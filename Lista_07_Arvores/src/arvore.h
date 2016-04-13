#ifndef ARVORE_H_
#define ARVORE_H_


typedef struct arvore{
	int info;
	struct arvore *esquerda;
	struct arvore *direita;
}Arvore;


Arvore* inicializa();
Arvore* criaRaiz(int info, Arvore *sae, Arvore *sad);
int vazia(Arvore *arvore);
void imprimirArvore(Arvore *arvore);
/*
Insere sempre no topo.
*/
void inserir(int item, Arvore *arvore);


#endif /* ARVORE_H_ */
