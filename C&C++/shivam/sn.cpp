#include "iostream"
using namespace std;
int main()
{
    int a,d,n,sn;
    cout<<"enter a a";
    cin>>a;
    cout<<"enter a d";
    cin>>d;
    cout<<"enter a n";
    cin>>n;

    
    sn=(n/2)*(2*a+(n-1)*d);
    cout<<"the sn is"<<sn;
    return 0;
}