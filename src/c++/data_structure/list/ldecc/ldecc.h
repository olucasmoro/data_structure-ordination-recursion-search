#include "node.h"
#include "stdio.h"

//Definição da estrutura de listas duplamente encadeadas com cabeça
struct ldecc
{
	node* cabeca;
};

//Prototipação das funções
ldecc* cria_nova_ldecc();
void imprime_ldecc(ldecc*);
node* busca_ldecc(ldecc*, int);
void insere_antes_ldecc(ldecc*, int, int);
void remove_chave_ldecc(ldecc*, int);
