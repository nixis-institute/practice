#include<iostream>
#include<stdlib.h>
using namespace  std;
struct Node
{
    int data;
    Node *next_Node;
    Node *prev_Node;
};
int main()
{
    Node *first,*mid,*last;
    first =(Node*)malloc(sizeof(Node*));
    mid =(Node*)malloc(sizeof(Node*));
    last =(Node*)malloc(sizeof(Node*));
    first-> data =100;
    first-> prev_Node = NULL;
    first-> next_Node = mid;
    mid-> data =101;
    mid-> prev_Node = first;
    mid-> next_Node = last;
    last->data =102;
    last->prev_Node = mid;
    last->next_Node =NULL;
    while(first)
    {
        cout<<first->data;
        first=first-> next_Node;
    }
}

 // namespace  ststruct Node

