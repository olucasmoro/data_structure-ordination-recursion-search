#include "node.h"
#include "stdio.h"

//Definição da estrutura de listas duplamente encadeadas com cabeça
struct ldesc
{
	node* inicio;
};

//Prototipação das funções
ldesc* cria_nova_ldesc();
void imprime_ldesc(ldesc*);
node* busca_ldesc(ldesc*, int);
void insere_antes_ldesc(ldesc*, int, int);
void remove_chave_ldesc(ldesc*, int);
void insere_fim_ldesc(ldesc*, int, int);