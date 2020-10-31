#include "no.h"
#include <stdio.h>
#include <limits.h>

struct filacc
{
	no* cabeca;
	no* fim;
};

filacc* cria_fila();
void imprime(filacc*);
void enfileira(filacc*, int);
int desenfileira(filacc*);