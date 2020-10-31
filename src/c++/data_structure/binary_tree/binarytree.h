#include "node.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

class BinaryTree
{
    public:
        Node* root; //Raiz

        //Construtor
        BinaryTree()
        {
            root = 0;
        }

        //Percursos
        void preOrder(Node*);
        void inOrder(Node*);
        void posOrder(Node*);
        void visitNode(Node*);
        void heightPosOrder(Node*);
        void heightNode(Node*);

        Node* findNode(int, Node*&); //Ponteiro para nó por referência

        //Inserção
        bool addNode(int);
        void doAddNode(int, Node*);

        //Remoção
        bool removeNode(int);
        void doRemoveNode(Node* , Node*);

        bool isStrictlyBinary(Node*);
};