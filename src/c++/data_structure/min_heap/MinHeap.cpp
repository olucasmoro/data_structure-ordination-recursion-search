#include "MinHeap.h"

MinHeap::MinHeap(int max)
{
	h = new int[max]; //Alocando o vetor
	numElementos = 0;//Heap vazio
	this->max = max;
}

MinHeap::~MinHeap()
{
	delete[] h;
}

void MinHeap::subir(int indice)
{
	int j;

	if (indice > 0)//Tem pai
	{
		//Calculo o índice do pai
		j = (indice - 1) / 2;

		//Verifica se o filho é maior do que o pai. Se for, troca
		if (h[indice] < h[j])
		{
			//Troca
			int aux = h[indice];
			h[indice] = h[j];
			h[j] = aux;

			subir(j);
		}
	}
}

void MinHeap::descer(int indice)
{
	int j = 2 * indice + 1;//Índice do filho da esquerda

	if (j < numElementos)//Se o filho da esquerda existe
	{
		//Verifica se o filho da direita também existe
		if (j + 1 < numElementos)
		{//Entro aqui se o nó possui dois filhos
			
			if (h[j + 1] < h[j])
				j++;
		}

		//j é o índice do maior dos filhos
		if (h[indice] > h[j])
		{
			//Pai é maior que o menor dos filhos
			//Preciso trocar
			int aux = h[indice];
			h[indice] = h[j];
			h[j] = aux;

			descer(j); 
		}
	}
}

void MinHeap::construirHeap()
{
	int ultimo = numElementos / 2 - 1;

	for (int i = ultimo; i >= 0; i--)
		descer(i);
}

void MinHeap::preencherAleatorio(int num)
{
	numElementos = num;

	//srand(time(0));

	for (int i = 0; i < num; i++)
		h[i] = rand() % 101;//Atribui um número aleatório
							//entre 0 e 100 para o vetor
}

void MinHeap::imprimir()
{
	if (numElementos == 0)
		cout << "Heap vazio!";
	else
		for (int i = 0; i < numElementos; i++)
			cout << h[i] << " ";

	cout << endl;
}

void MinHeap::inserir(int novaChave)
{
	if (numElementos < max)
	{
		h[numElementos] = novaChave;
		subir(numElementos++);
	}
	else
		cout << "Overflow\n";
}

int MinHeap::remover()
{
	int val = INT_MAX;

	if (numElementos > 0)
	{
		val = h[0];
		h[0] = h[--numElementos];
		descer(0);
	}
	else
		cout << "Underflow\n";

	return val;
}

bool MinHeap::isStrictlyBinary(Node* node)
{
	return (!node->right && !node->left) || (node->right && node->left && isStrictlyBinary(node->left) && isStrictlyBinary(node->right));
}