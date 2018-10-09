#include "iostream"
using namespace std;

int main()
{
    int n1, n2, minMultiple,a,b;
    cout<<"Enter two positive integers: ";
    cin>>a>>b;

    // maximum number between n1 and n2 is stored in minMultiple
    minMultiple = (n1>n2) ? n1 : n2;

    // Always true
    while(1)
    {
        if( minMultiple%n1==0 && minMultiple%n2==0 )
        {
            cout<<"The LCM of %d and %d is %d."<<n1<<n2<<minMultiple;
            break;
        }
        ++minMultiple;
    }
    return 0;
}