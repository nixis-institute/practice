#include"iostream"
using namespace std;
int fact(int f)
{
int i, n=1;
for(i=1;i<=f;i++)
n=n*i;
//cout<<n*i;


return n;
}

int main()
{
    int value, result;
    cout<<"enter the value";
    cin>>value;
    result=fact(value);
    cout<<"the factorial"<<result;
return 0;
}
