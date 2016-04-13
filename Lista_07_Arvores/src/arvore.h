#ifndef ARVORE_H_
#define ARVORE_H_


typedef struct arvore{
	char info;
	struct arvore *esquerda;
	struct arvore *direita;
}Arvore;


Arvore* inicializa();
Arvore* criaRaiz(char info, Arvore *sae, Arvore *sad);
int vazia(Arvore *arvore);
void imprimirArvore(Arvore *arvore);
void inserir(char item, Arvore *arvore);


#endif /* ARVORE_H_ */
