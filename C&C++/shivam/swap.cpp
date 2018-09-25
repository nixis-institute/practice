#include"iostream"
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a first value";
    cin>>a;
    cout<<"enter a second value";
    cin>>b;

    c=a;
    a=b;
    b=c;
    cout<<"now value of a is "<<a<<endl;
    cout<<"now value of b is"<<b;
    return 0;

}