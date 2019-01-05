#include "iostream"
using namespace std;
int main()
{
    int i,j,in;
    cout<<"Enter a value to the result :- ";
    cin>>in;
    for(i=in;i>1;--i)
    {
        for(j=i;j<=1;--j)
        {
            cout<<"*";
        }

        cout<<"\n";

    }


}
