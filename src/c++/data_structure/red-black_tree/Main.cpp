#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "RBTree.h"

int main()
{
	RBTree* tree = new RBTree();

	//srand(time(NULL));

    cout << "\nInsercoes:\n";

    tree->insert(12);
    tree->insert(6);
    tree->insert(25);
    tree->insert(10);
    tree->insert(3);
    tree->insert(18);
    tree->insert(55);
    tree->insert(11);
    tree->insert(7);
    tree->insert(4);
    tree->insert(2);
    tree->insert(15);
    tree->insert(21);
    tree->insert(33);
    tree->insert(98);
    tree->insert(9);
    tree->insert(13);
    tree->insert(16);
    tree->insert(20);
    tree->insert(22);
    tree->insert(26);
    tree->insert(50);   

    tree->print();

    /*tree->insert(10);
	printf("\nInseriu o 10:\n");
	tree->print();

	tree->insert(5);
	printf("\nInseriu o 5:\n");
	tree->print();
	
	tree->insert(20);
	printf("\nInseriu o 20:\n");
	tree->print();
	
	tree->insert(25);
	printf("\nInseriu o 25:\n");
	tree->print();
	
	tree->insert(15);
	printf("\nInseriu o 15:\n");
	tree->print();
	
	tree->insert(18);
	printf("\nInseriu o 18:\n");
	tree->print();
	
	tree->insert(13);
	printf("\nInseriu o 13:\n");
	tree->print();
	
	tree->insert(19);
	printf("\nInseriu o 19:\n");
	tree->print();

    printf("\nRemocao do 10:\n");
    tree->remove(10);
    tree->print();

    printf("\nRemocao do 19:\n");
    tree->remove(19);
    tree->print();

    printf("\nRemocao do 13:\n");
    tree->remove(13);
    tree->print();

    printf("\nRemocao do 15:\n");
    tree->remove(15);
    tree->print();*/

    cout << "\nRemoções:\n";

    tree->remove(98);
    tree->remove(10);
    tree->remove(26);
    tree->remove(3);
    tree->remove(9);
    tree->remove(12);
    tree->remove(55);

    tree->print();
    
    cout << "\n Black height = " << tree->blackHeight(tree->root) << endl;

	delete tree;
	
	return 0;
}
