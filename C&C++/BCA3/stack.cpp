#include<iostream>
#include<stdlib.h>
using namespace std;
struct stack
{
    int array[50];
    int pos = -1 ;
}s;

void display()
{
    int i,mul=1;
    for (i=0;i<=s.pos;i++)
    {
        cout<<s.array[i];
        //mul=mul * s.array[i];
    }

    cout<<"="<<mul;

}

void push(int data)
{
    if(s.pos<49)
    s.array[++s.pos]=data;
    else
    {
        cout<<"stack is full";
    }    
}

void pop()
{
    if(s.pos<0)
    {
        cout<<"stack is empty";
    }
    else
    {
        s.pos--;
    }
}
void search(int sr)
{
    int i=0,f=0
    for(i=0;i<=s.pos;i++)
    {
        if(sr==s.array[i])
        {
            //cout<<"the value is found";
            f=1;
            break;
        }
        
    }
    if(f==1)
    {
        cout<<"the valu has found";
    }
    else
    {
        cout<<"the value has not found";
    }
    


}

int main()
{
     push(7);
     push(11);
     push(10);
     push(12);
     push(90);
    //  pop();
    //  pop();

    //  display();
     int in;
     cout<<"Enter a value for searching :- ";
     cin>>in;
     search(in);
}