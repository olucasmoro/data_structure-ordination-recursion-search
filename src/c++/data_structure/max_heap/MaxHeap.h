#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

using namespace std;

class MaxHeap
{
	private:
		int* h;
		int numElementos;
		int max;

	public:
		MaxHeap(int);//Construtor
		~MaxHeap();//Destrutor
		void subir(int);
		void descer(int);
		void construirHeap();
		void preencherAleatorio(int);
		void imprimir();
		void inserir(int);
		int remover();
};