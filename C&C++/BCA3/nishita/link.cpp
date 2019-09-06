#include<iostream>
#include<stdlib.h>
using namespace std;
struct Node
{
    Node *NextNode;
    int data;
};

void ADD(Node **Nishita,int data)
{
    Node *new_node = (Node *)malloc(sizeof(Node *));
    new_node->data = data;
    new_node->NextNode = *Nishita;
    *Nishita = new_node;
}

int main()
{
    Node *first,*mid,*last;
    first = (Node*)malloc(sizeof(Node *));
    mid = (Node*)malloc(sizeof(Node *));
    last = (Node*)malloc(sizeof(Node *));

    first->data = 100;
    first->NextNode = mid;
    mid->data=101;
    mid->NextNode = last;
    last->data = 102;
    last->NextNode=NULL;
    ADD(&first,99);

    
    while (first)
    {
        cout<<first->data<<endl;
        first = first->NextNode;
    }
    

}
    