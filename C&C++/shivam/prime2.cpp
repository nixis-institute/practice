#include "iostream"
using namespace std;
int main()
{
    int i,n,f=1;

    cout<<"enter a value";
    cin>>n;
    for(i=0;i<n;i++)
    {
        if(n%i==0)
        {
            //cout<<"prime no";
            f = 0;
            break;
        }
    }
    if(f==1)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }

}