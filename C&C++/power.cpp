#include "iostream"
using namespace std;
int power(int value,int n)
{
    int i,m=1;
    for(i=1;i<=n;i++)
    m=m*value;
    return m;
    }
    int main()
    {
        int p,value;
        cout<<"enter the value:";
        cin>>value;
        cin>>p;
        //cout<<p;
        cout<<power(value,p);
        return 0;
     }