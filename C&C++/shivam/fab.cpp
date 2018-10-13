#include "iostream"
using namespace std;
int main()
{
    int a,i,c,b,sum=0;
    
    a=0;
    b=1;    
    for(i=0;i<=10;i++)
    {
        c=a+b;
        cout<<c<<"+";
        sum=sum+c;
        a=b;
        b=c;
    }

    cout<<i<<"+";
    cout<<"\b";
    cout<<"="<<sum;
    return 0;

}