#include "iostream"
#include<string.h>
using namespace std;
int main()
{
    int i,an,a,d,n,sum;
    cout<<"enter the term of A.P ";
    cin>>a;
    cout<<"enter the difference between them ";
    cin>>d;
    cout<<"enter the nth term you want ";
    cin>>n;
    an=a+(n-1)*d;
    sum=(n/2)*(2*a+(n-1)*d);
    cout<<"the anth term is :"<<an<<endl;
    cout<<"the sum of the A.P. is "<<sum<<endl;
    for(i=1;i<=n;i++)
    {
        cout<<a<<" ";
         a=a+d;
    }
    return 0;
}