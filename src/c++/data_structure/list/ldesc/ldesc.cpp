#include "ldesc.h"

ldesc* cria_nova_ldesc()
{
	ldesc* l = new ldesc;
	
	l->inicio = NULL;
	
	return l;
}

void imprime_ldesc(ldesc* l)
{
	if (l->inicio == NULL)
		printf("Lista vazia!");
	else
		for (node* ptr = l->inicio; ptr != NULL; ptr = ptr->prox)
			printf("%d ", ptr->chave);
			
	printf("\n");
}

node* busca_ldesc(ldesc* l, int chave)
{
	node* ptr;
	
	ptr = l->inicio;
	
	while (ptr && ptr->chave != chave)
		ptr = ptr->prox;
		
	return ptr;
}

void insere_antes_ldesc(ldesc* l, int nova_chave, int valor_proc)
{
	node *p, *q, *novo;
	
	novo = new node;
	novo->chave = nova_chave;
	
	p = NULL;
	q = l->inicio;
	
	while (q && q->chave != valor_proc)
	{
		p = q;
		q = q->prox;
	}
	
	novo->ant = p;
	novo->prox = q;
	
	if (p)
		p->prox = novo;
	else
		l->inicio = novo;
}

void remove_chave_ldesc(ldesc* l, int chave)
{
	node* p;

	//Busca a chave na lista
	p = l->inicio;
	
	while (p && p->chave != chave)
		p = p->prox;
		
	if (p)//Achei, vou remover
	{
		if (p->ant != NULL)
			p->ant = p->prox;

		if (p->prox)
		{
			p->prox = p->ant;
		}
		
		delete p;
	}
}

void insere_fim_ledsc(ldesc* l, int nova_chave, int fim)
{
	node *p, *q, *novo;

	novo = new node;
	novo->chave = nova_chave;

	q = l->inicio;

	while (q != NULL && q->chave != fim) 
	{
		q = q->prox;
	}

	novo->ant = q;
	novo->prox = NULL;
	q->prox = novo;
}