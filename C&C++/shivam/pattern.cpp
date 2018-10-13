#include "iostream"
#include<time.h>
using namespace std;
int main()
{
    int i,j,k=97;
    for(i=0;i<10;++i)
    {
        for(j=0;j<=i;j++)
        {
            
            cout<<"*";
            k++;
        }
        cout<<"\n";
    }
}