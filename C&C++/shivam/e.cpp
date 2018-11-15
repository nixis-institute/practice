#include "iostream"
using namespace std;
int main()
{
int a[10],i;
cout<<"enter ten elements";

for(i=0;i<10;i++)
{
    cin>>a[i];
}
cout<<"even no \n";
for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        cout<<a[i]<<endl;
    

    }
cout<<"Odd number\n";
    for(i=0;i<10;i++)
    {

        if(a[i]%2==1)
        cout<<a[i<<endl;
    }


}


