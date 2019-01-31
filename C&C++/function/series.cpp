#include "iostream"
using namespace std;

int power(int val, int pow)
{
    int s=1,i;
    for(i=1;i<=pow;i++)
    {
        s=s*val;
    }
    return s;
}
int sum(int s)
{
int i,p=0;
for(i=1;i<=s;i++)
{
    p=p+power(i,i);
}
return p;
}
int main()
{
    int value,power;
    cout<<"enter the value and  power";
    cin>>power;
    //cin>>value>>power;
    cout<<sum(power);
    return 0;
}