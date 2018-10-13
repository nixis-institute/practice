#include "iostream"
using namespace std;
int main()
{
    int i,s;
    s=0;
    for(i=1;i<=10;i++)
    {
        cout<<i<<"+";
        s =s +i;
    }
    cout<<"\b";
    cout<<"="<<s;
}