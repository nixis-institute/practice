#include "iostream"
using namespace std;
int main()
{
    int i,j,k=65;
    for(i=0;i<=10;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<(char(k));
            k++;
        }
        cout<<"\n";
    }
}