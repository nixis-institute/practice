#include "iostream"
using namespace std;
int main()
{

    int i,j,k;
    for(i=1;i<=7;i++)
    {
        for(k=7;k>i;k--)
        {

            cout<<" ";
        }
        for(j=0;j<i*2-1;j++)
        {
                 cout<<"*";


        }
                   cout<<"\n";
    }

    
    for(i=7;i>=1;i--)
    {
        for(k=7;k>i;k--)
        {
            cout<<"  ";
        }
        for(j=0;j<(i*2)+1;j++)
        {
                 cout<<"*";
        }
                cout<<"\n";
    return 0;
}
} 