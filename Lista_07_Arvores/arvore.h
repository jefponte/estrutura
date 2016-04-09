#ifndef ARVORE_H_
#define ARVORE_H_


typedef struct arvore{
	char info;
	struct arvore *esquerda;
	struct arvore *direita;
}Arvore;


void inicializa(Arvore *arvore);
void criaRaiz(Arvore *arvore);
void vazia(Arvore *arvore);
void inserir(char item, Arvore *arvore);


#endif /* ARVORE_H_ */
