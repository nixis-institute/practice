#include<iostream>
#include<stdlib.h>using namespace std;
struct Node
{
    int data;
    Node *new_Node;
};
int main()
{
    Node * first,*mid,*last;
    first =(Node*)malloc(sizeof(Node*));
    mid =(Node*)malloc(sizeof(Node*));
    last =(Node*)malloc(sizeof(Node*));
    first->data =100;
    first->new_Node = mid;
    mid->data = 101;
    mid->new_Node = last;
    last->data =102;
    last-> new_Node =NULL;
    while(first)
    {
        cout<<first->data<<"\n";
        first = first->new_Node;
    }
}



