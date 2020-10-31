#include "filacc.h"

filacc* cria_fila()
{
	filacc* f = new filacc;

	f->cabeca = f->fim = new no;
	f->cabeca->prox = NULL;

	return f;
}

void imprime(filacc* f)
{
	if (f->cabeca->prox == NULL)//A fila está vazia
		printf("Fila vazia!");
	else
		for (no* ptr = f->cabeca->prox; ptr != NULL; ptr = ptr->prox)
			printf("%d ", ptr->chave);

	printf("\n");
}

void enfileira(filacc* f, int novoValor)
{
	no* novo = new no;

	novo->chave = novoValor;
	novo->prox = NULL;

	f->fim->prox = novo;
	f->fim = novo;
}

int desenfileira(filacc* f)
{
	int x;
	no* p;

	x = INT_MAX;
	p = f->cabeca->prox;

	if (p)
	{
		x = p->chave;
		f->cabeca->prox = p->prox;

		delete p;

		if (f->cabeca->prox == NULL)//Fila ficou vazia
			f->fim = f->cabeca;
	}
	else
		printf("Fila vazia!\n");

	return x;
}