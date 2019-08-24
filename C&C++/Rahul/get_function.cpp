#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char in;
    cout<<"ENTER TEXT :- ";
    cin.get(in);
    while(count!='\n')
    {
        //cout<<c;
        count++;
        cin.get(in);
    }
    cout<<"The lenth is :- "<<count;
}