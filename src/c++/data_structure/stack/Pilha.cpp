#define MAX 100

//Estrutura de uma pilha
struct pilha_seq
{
    int* vetp;
    int topo;
    int max;
};

//Aloca e retorna uma pilha
pilha_seq* cria_pilha_seq(int max)
{
    pilha_seq* pilha;

    pilha = new pilha_seq;
    pilha->vetp = new int[max];
    pilha->max = max;
    pilha->topo = -1;
}

//Empilhar um elemento
void empilhar(pilha_seq* p, int novo)
{
    //Verifica se a pilha não está cheia
    if (p-> topo != p->max -1)
    {
        p->topo++;
        p->vetp[p->topo] = novo;
    }
}

//Desempilhar
int desempilhar(pilha_seq* p)
{
    int x;

    //Verifica se a pilha está vazia
    if (p->topo != -1)
    {// Posso desempilhar
        x = p->vetp[p->topo];
        p->topo--;
    }
    else
    {
        x = INT_MAX;
    }
    return x;
}

int main() {

    //Declaração e inicialização de uma pilha
    pilha_seq* pilha = cria_pilha_seq(MAX);

    return 0;
}

