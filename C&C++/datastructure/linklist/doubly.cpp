#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node * next_node;
    node * prev_node;

};
void append(node **last,int data)
{
    node *new_node = (node*)malloc(sizeof(node*));
    node *ref = *last;


    new_node-> data= data;
    new_node-> next_node = NULL;
    new_node ->prev_node = ref;

    ref->next_node = new_node;
    *last = new_node;
}

void create(node **first,int data)
{
    node *new_node = (node*)malloc(sizeof(node*));
    node *ref = *first;

    new_node->prev_node = NULL;
    new_node ->data = data;
    new_node->next_node = ref;


    ref->prev_node = new_node;    
    *first = new_node;
}

void DEL(node **nd)
{
    node *ref = *nd;

    if(ref->prev_node == NULL)
    {
        ref->next_node->prev_node = NULL;
        *nd = ref->next_node;
    }
    else if(ref->next_node == NULL)
    {
        ref->prev_node->next_node = NULL;
        *nd = ref->prev_node;
    }
    else{
        ref->prev_node->next_node = ref->next_node;
        ref->next_node->prev_node = ref->prev_node;
        *nd = ref->next_node;
    }

    free(ref);
}


int main()
{
    node *first = (node*)malloc(sizeof(node*));
    node *mid = (node*)malloc(sizeof(node*));
    node *last = (node*)malloc(sizeof(node*));

    first -> data = 101;
    first -> next_node = mid;
    first ->prev_node =NULL;

    mid -> data = 102;
    mid -> next_node = last;
    mid ->prev_node = first;

    last->prev_node = mid;
    last -> data = 103;
    last -> next_node = NULL;

    append(&last,110);
    append(&last,111);
    // append(&last,112);

    create(&first,100);
    create(&first,99);

    DEL(&first->next_node->next_node);

    while(first)
    {
        cout<<first-> data<<endl;
        first = first-> next_node; 
    }

}
