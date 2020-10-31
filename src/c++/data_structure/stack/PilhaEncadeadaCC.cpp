#include "Pilha.cpp"

struct no
{
	int chave;
	no* prox;
};

struct pilha_cc
{
    no* cabeca;
};

pilha_cc* cria_pilha_cc()
{
    pilha_cc* pilha = new pilha_cc;

    pilha->cabeca = new no;
    pilha->cabeca->prox = NULL;

    return pilha;
}

//Empilhar
void empilhar(pilha_cc* pilha, int novoValor)
{
    no* novo;

    novo = new no;
    novo->chave = novoValor;
    novo->prox = pilha->cabeca->prox;

    pilha->cabeca->prox = novo;
}

//Desempilhar
int desempilhar(pilha_cc* pilha)
{
    int x;
    no* p;

    x = INT_MAX;

    p = pilha->cabeca->prox;
    if (p != NULL)
    {
        x = p->chave;
        pilha->cabeca->prox = p->prox;

        delete p; //Libera p
    }
    
    return x;
}