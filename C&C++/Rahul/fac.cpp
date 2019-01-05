#include "iostream"
using namespace std;
int main()
{
int in,st=1,i;
cout<<"Enter a value :- ";
cin>>in;
for(i=1;i<=in;i++)
{
    st=st*i;
}
cout<<st;
}