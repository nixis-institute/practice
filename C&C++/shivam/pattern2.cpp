#include "iostream"
using namespace std;
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(k=5;k>i;k--)
        {

            cout<<" ";
        }
        for(j=0;j<i*2-1;j++)
        {
                 cout<<"*";


        }
                   cout<<"\n";
    }
    
    return 0;
}
