#include "iostream"
using namespace std;
struct node
{
     int data;
     node *next_node;           
};
void printlist(node *n)
{   
    while(n!=0)
    {
        cout<<n->data<<endl;
        n=n->next_node;
    }

}
int main()
{
    node *first;
    node *mid;
    node *last;
    first=(node*)malloc(sizeof(node*));
    mid=(node*)malloc(sizeof(node*));
    last=(node*)malloc(sizeof(node*));
    first->data=53446;
    first->next_node=mid;
    mid->data=2453;
    mid->next_node=last;
    last->data=8677;
    last->next_node=NULL;
    printlist(first);
    return 0;
}