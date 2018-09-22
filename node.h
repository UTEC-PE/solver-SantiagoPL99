#ifndef SANTIAGOPL_NODE_H
#define SANTIAGOPL_NODE_H
#include <iostream>
using namespace std;


struct node
{
    char data;
    node* left;
    node* right;
};

struct node* newNode(char data)
{
    node* nodo= new node;

    nodo->data=data;
    nodo->left=nullptr;
    nodo->right=nullptr;
}

int search(string str, char operador)
{
    int i=0;
    for(char &x: str)
    {
        if(x == operador)
        {
            return i;
        }
        i++;
    }
}

void build(string str)
{
    node* nodo = new node;
    if(search(str,'+'))
    {
        nodo->data = '+';

    }
}

#endif //SANTIAGOPL_NODE_H
