#include<iostream>
using namespace std;
class A{
    public:
        int a,b,c;
        A()
        {
            cout<<"constructor is called\n";
            a=b=c=9;
        }
        void show()
        {
            cout<<a<<b<<c;
        }
        ~A()
        {
            cout<<"Destructor is called\n";
        }
};

int main()
{
    A a;
    a.show();
}