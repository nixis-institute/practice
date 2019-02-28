#include "iostream"
using namespace std;
class A
{
    public:
    void pattern(int a);
};
void A::pattern(int x)
{
    int i,j;
    for(i=1;i<=x;i++)
    {
        for(j=19;j<=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}
int main()
{
    A obj;
    int a;
    cout<<"Enter a value :- ";
    cin>>a;
    obj.pattern(a);
}