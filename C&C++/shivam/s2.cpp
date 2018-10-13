#include "iostream"
using namespace std;
int main()
{
    float a ,i ,c=0 , b=2 ,s=0;
    cout<<"enter a value";
    cin>>a;

    for(i=1;i<=a;i++)
    {
     c=c+(1/i);
     //cout<<i<<"+"<<"/"<<b;
     //s=s+c;
     //cout<<c;
    }
    cout<<c;
    //cout<<"\b";
    return 0;
}