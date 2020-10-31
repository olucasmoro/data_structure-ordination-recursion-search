#include <stdio.h>
#include <limits.h>

#define MAX 5

//Definição da estrutura
struct filaseq
{
	int* vetF;
	int inicio;
	int fim;
	int max;
};

filaseq* cria_fila(int m)
{
	filaseq* f = new filaseq;

	f->vetF = new int[m];
	f->inicio = f->fim = 0;
	f->max = m;

	return f;
}

void imprime(filaseq* f)
{
	if (f->inicio == f->fim)//A fila está vazia
		printf("Fila vazia!");
	else
		for (int i = f->inicio; i < f->fim; i++)
			printf("%d ", f->vetF[i]);

	printf("\n");
}

void enfileira(filaseq* f, int novo)
{
	if (f->fim != f->max)//Verifica se tem espaço para o enfileiramento
		f->vetF[f->fim++] = novo;
	else
		printf("Fila cheia!\n");
}

int desenfileira(filaseq* f)
{
	int x;

	if (f->inicio != f->fim)//Tem elemento na fila
		x = f->vetF[f->inicio++];
	else
	{
		printf("Fila vazia!\n");
		x = INT_MAX;//Valor fora da faixa válida de elementos da fila
	}

	return x;
	
}