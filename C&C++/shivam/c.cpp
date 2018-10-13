#include "iostream"
using namespace std;
int main()
{
    int a , i, c=0;
    cout<<"enter a value ";
    cin>>a;
    for(i=1;i<=a;i++)
    {
        c=c+i/a;
        cout<<i<<"+"<<"/"<<i;
        
    }
    cout<<"\b";
return 0;
}