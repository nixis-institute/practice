#include "iostream"
using namespace std;
int main()
{
    int a[3][3],i,j;
    cout<<"enter a value";
    for(i=0;i<3;i++)
    {
        for(j=i;j<3;j++)
        {
         cin>>a[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=i;j<=3;j++)
        {
            cout<<a[i][j]<<"  ";
        }
         cout<<"\n";
    }

}