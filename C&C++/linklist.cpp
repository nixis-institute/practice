#include<iostream>
#include<stdlib.h>

using namespace std;
struct node{
    int data;
    node *next_node;
};

int main()
{
    
    node *first = (node*)malloc(sizeof(node*));
    node *mid = (node*)malloc(sizeof(node*));
    node *last = (node*)malloc(sizeof(node*));
    
    first->data = 101;
    first->next_node = mid;

    mid->data = 102;
    mid->next_node = last;

    last->data = 103;
    last->next_node = NULL;


    while(first){
        cout<<first->data<<endl;
        first = first->next_node;
    }
}


