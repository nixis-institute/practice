#include "iostream"
using namespace std;
class A
{
    public:
    void get()
    {
        int sum=0,a,b;
        cout<<"Enter value :- ";
        cin>>a;
        cout<<"Enter value :- ";
        cin>>b;
        if(a!=b)
            {
                sum++;
            }
        else
            {
                sum--;
            }
            cout<<a<<" It is A"<<endl;
            cout<<b<<" It is B"<<endl;
            cout<<sum<<" It is Answare"<<endl;
    }
};
int main()
{
    A obj1;
    obj1.get();
}