#include "iostream"
using namespace std;
class Arrays
{
    public:
    int sumofarray(int a[],int e);
};
int Arrays::sumofarray(int a[],int s)
{
    int sum=0,i;
    for(i=0;i<s;i++)
    {
        sum=sum+a[i];
    }
    return sum;
}
int main()
{
    Arrays obj1;
    int c[]={1,2,3,4},p=5;
    cout<<obj1.sumofarray(c,p);
}
