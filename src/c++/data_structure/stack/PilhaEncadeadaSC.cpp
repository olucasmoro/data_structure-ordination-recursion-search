#include "Pilha.cpp"

struct no
{
	int chave;
	no* prox;
};

//Estrutura de pilha sem cabeça
struct pilha_sc
{
    no* topo;
};

//Cria uma nova pilha sem cabeça
pilha_sc cria_pilha_sc()
{
    pilha_sc* pilha = new pilha_sc;

    pilha->topo = NULL;

    return pilha;
}
