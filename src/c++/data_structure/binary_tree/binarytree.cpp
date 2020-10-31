#include "binarytree.h"

void BinaryTree::preOrder(Node *node)
{
    if (node)
    {
        visitNode(node);
        /*No momento que não existir mais 
        subarvore da esquerda ele para de descer para esquerda*/
        preOrder(node->left);
        /*No momento que não existir mais 
        subarvore da direita ele para de descer para direita*/
        preOrder(node->right);
    }
}

void BinaryTree::inOrder(Node* node)
{
    if(node)
    {
        inOrder(node->left);
        visitNode(node);
        inOrder(node->right);
    }
}

void BinaryTree::posOrder(Node* node)
{
    if (node)
    {
        posOrder(node->left);
        posOrder(node->right);
        visitNode(node);
    }
}

//Imprime
void BinaryTree::visitNode(Node* node)
{
    cout << node->info << " ";
}

void BinaryTree::heightPosOrder(Node* node)
{
    if (node)
    {
        posOrder(node->left);
        posOrder(node->right);
        heightNode(node);
    }
}

void BinaryTree::heightNode(Node* node)
{
    int alt1, alt2;

    if (node->left)
        alt1 = node->left->height;
    else
        alt1 = 0;

    if (node->right)
        alt1 = node->right->height;
    else
        alt1 = 0;
    
    if (alt1 > alt2)
        node->height = alt1 + 1;
    else
        node->height = alt2 + 1;
    
}
 
Node* BinaryTree::findNode(int value, Node*& parent)
{
    Node* cur = root;

    while (cur)
    {
        if(cur->info == value)//Achou
            return cur;

        //Não achou, desce na árvore
        parent = cur;
        if (value < cur->info)
            cur = cur->left; //Desce para esquerda
        else
            cur = cur->right; //Desce para direita
        
    }
    return cur;
}

bool BinaryTree::addNode(int value)
{
    Node* parent = 0;

    Node* cur = findNode(value, parent); //Se retornar um valor diferente de 0, significa que a chave ja existe

    if (!cur) //Verifica se ja existe uma chave com valor igual
    {
        doAddNode(value, parent);
        return true;
    }
    return false; //Não fez a inserção
}

void BinaryTree::doAddNode(int value, Node* parent)
{
    if (parent) //Se existe o pai, significa que a árvore já possui algum nó
    {
        if (value < parent->info)
            parent->left = new Node(value);
        else
            parent->right = new Node(value);
        
    }
    else
        root = new Node(value); //Cria o primeiro nó da árvore
}

bool BinaryTree::removeNode(int value)
{
    Node* parent = 0; //Pai da raiz

    Node* node = findNode(value, parent); //Se retornar um valor, significa que existe a chave

    if (node) //Verifica se existe a chave com valor igual value passado
    {
        doRemoveNode(node, parent);
        return true;
    }
    return false;
}

//Node recebido aponta para o nó que queremos remover
void BinaryTree::doRemoveNode(Node* node, Node* parent)
{
    Node* y; //Aponta para o nó que vai remover
    Node* x; //Aponta para o pai do nó que vai remove
    Node* py; //Se tiver, aponta para o filho do nó que vai remover

    if (!node->left || !node->right)
    { //Possui 0 ou 1 filho
        y = node;
        py = parent;
    }
    else
    { //Tem 2 filhos
        //Encontra o menor valor da subarvore da direita
        py = node;
        y = node->right;
        
        while (y->left)
        { //Desce para esquerda enquanto houver filho na esquerda
            py = y;
            y = y->left;
        }
        
    }

    if (y->left)
        x = y->left;
    else
        x = y->right;
    
    //Remover o y
    if (!py) //Verifica se o pai existe
        root = x;
    else
    {
        if (y == py->left)
            py->left = x;
        else
            py->right = x;
    }

    if (y != node)
        node->info = y->info;
    
    delete y;

}

bool BinaryTree::isStrictlyBinary(Node* node)
{
    bool isStrictly = (!node->right && !node->left) || (node->right && node->left && isStrictlyBinary(node->left) && isStrictlyBinary(node->right));

	return isStrictly;
}

