#include "ldecc.h"

ldecc* cria_nova_ldecc()
{
	ldecc* l = new ldecc;
	
	l->cabeca = new node;
	
	l->cabeca->ant = l->cabeca->prox = NULL;
	
	return l;
}

void imprime_ldecc(ldecc* l)
{
	if (l->cabeca->prox == NULL)
		printf("Lista vazia!");
	else
		for (node* ptr = l->cabeca->prox; ptr != NULL; ptr = ptr->prox)
			printf("%d ", ptr->chave);
			
	printf("\n");
}

node* busca_ldecc(ldecc* l, int chave)
{
	node* ptr;
	
	ptr = l->cabeca->prox;
	
	while (ptr && ptr->chave != chave)
		ptr = ptr->prox;
		
	return ptr;
}

void insere_antes_ldecc(ldecc* l, int nova_chave, int valor_proc)
{
	node *p, *q, *novo;
	
	novo = new node;
	novo->chave = nova_chave;
	
	p = l->cabeca;
	q = l->cabeca->prox;
	
	while (q && q->chave != valor_proc)
	{
		p = q;
		q = q->prox;
	}
	
	novo->ant = p;
	novo->prox = q;
	p->prox = novo;
	
	if (q)
		q->ant = novo;
}

void remove_chave_ldecc(ldecc* l, int chave)
{
	node* p;
	//node* aux;
	
	//Busca a chave na lista
	p = l->cabeca->prox;
	
	while (p && p->chave != chave)
		p = p->prox;
		
	if (p)//Achei, vou remover
	{
		//aux = p->ant;
		p->ant->prox = p->prox;
		
		if (p->prox)
		{
			//aux = p->prox;
			p->prox->ant = p->ant;
		}
		
		delete p;
	}
}
