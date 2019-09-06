# include <iostream>
# include <stdlib.h>
using namespace std;

struct kirti 
{
    int data;
    kirti*next_node;
};
int main ()
{
    kirti *first ,*mid,*last;
    first= (kirti*)malloc(sizeof(kirti*));
    mid= (kirti*)malloc(sizeof(kirti*));
    last= (kirti*)malloc(sizeof(kirti*));
    first ->data =100;
    first ->next_node =mid;
    mid ->data =101;
    mid ->next_node =last;
    last ->data =102;
    last ->next_node = NULL;

    while (first)
    {
        cout<<first ->data<<"\n";
        first=first ->next_node;
    }
}
void append (node**last,int data)
{
    node*new_node=(node*)malloc(sizeof(kirti*));
    new_node->data=data;
    new_node->next_node=NULL;
    node *ref=*last;
    ref->next_node=new_node;
    *last=new_node;
    
    append(&last,104)


}
