#include "iostream"
using namespace std;
int max=10;
int top=-1;
int stack[10];
void isempty()
{
    if(top==-1)
    {
        cout<<"empty";
    }
}
void isfull()
{
    if(top==10)
    {
        cout<<"overflow";
    }

}
void push(int data)
{   
    int get;
    if(top<=9)
    {
        ++top;
        stack[top]=data;
        //cout<<"This your data "<<stack;
    }
    else{
        cout<<"stack is full";
    }
}
int pop()
{   int data;
    if(top>=9)
    {   
        data=stack[top];
        top--;
    }
    else{

        cout<<"stack is empty";
    }
}
int main()
{
        int data;
        char ch;
        cout<<"enter element : ";
        cin>>data;
        do{
             push(data);
            cout<<"choose y for continue : ";
                cin>>ch;
                
                cout<<"Enter element : ";
                cin>>data; 
        }
        while(ch=='y' || ch=='Y');
        
      return 0;

}