#include <stdio.h>
#include <limits.h>

#define MAX 5

struct filacirc
{
	int* vetF;
	int inicio;
	int fim;
	int max;
};

filacirc* cria_fila(int m)
{
	filacirc* f = new filacirc;

	f->vetF = new int[m];
	f->inicio = INT_MIN;
	f->fim = INT_MAX;
	f->max = m;

	return f;
}

void imprime(filacirc* f)
{
	if (f->inicio == INT_MIN)//A fila está vazia
		printf("Fila vazia!");
	else
	{
		if (f->inicio < f->fim)
			for (int i = f->inicio; i < f->fim; i++)
				printf("%d ", f->vetF[i]);
		else
		{
			for (int i = f->inicio; i < f->max; i++)
				printf("%d ", f->vetF[i]);

			for (int i = 0; i < f->fim; i++)
				printf("%d ", f->vetF[i]);				
		}
	}

	printf("\n");
}

void enfileira(filacirc* f, int novo)
{
	if (f->inicio != f->fim)//Fila não está cheia
	{
		if (f->fim == INT_MAX)//Fila está vazia
			f->inicio = f->fim = 0;//Configura inicio e fim para índices válidos antes da inserção

		f->vetF[f->fim] = novo;
		f->fim = (f->fim + 1) % f->max;
	}
	else
		printf("Fila cheia!\n");
}

int desenfileira(filacirc* f)
{
	int x = INT_MAX;

	if (f->inicio != INT_MIN)//Verifica se há elemento na fila
	{
		x = f->vetF[f->inicio];
		f->inicio = (f->inicio + 1) % f->max;

		if(f->inicio == f->fim)//Se a fila ficou vazia após o desenfileiramento
		{
			f->inicio = INT_MIN;
			f->fim = INT_MAX;
		}
	}
	else
		printf("Fila vazia!\n");

	return x;
}