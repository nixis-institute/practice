#include "iostream"
using namespace std;
class even
{
    public:
    int print(int a);
};
int even::print(int A1)
{
    int i,f=0;
    for(i=1;i<=A1;i++)
    {
        if(i%2==0)
        {
            cout<<i<<" is even number"<<endl;
        }
    }
}    
int main()
{
    even obj1;
    int a;
    cout<<"Enter a value :- ";
    cin>>a;
    obj1.print(a);
}    