#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    node * next_node;

};
void append(node **last,int data)
{
    node *new_node = (node*)malloc(sizeof(node*));
    new_node-> data= data;
    new_node-> next_node = NULL;
    node *ref = *last;
    ref->next_node=new_node;
    *last = new_node;
}

void create(node **first,int data)
{
    node *new_node = (node*)malloc(sizeof(node*));
    new_node ->data = data;
    new_node->next_node = *first;
    *first = new_node;
}


int main()
{
node *first = (node*)malloc(sizeof(node*));
node *mid = (node*)malloc(sizeof(node*));
node *last = (node*)malloc(sizeof(node*));

first -> data = 101;
first -> next_node = mid;

mid -> data = 102;
mid -> next_node = last;

last -> data = 103;
last -> next_node = NULL;

append(&last,110);
append(&last,111);
append(&last,112);

create(&first,100);
create(&first,99);

    while(first)
    {
        cout<<first-> data<<endl;
        first = first-> next_node; 
    }

}
