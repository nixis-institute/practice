#include "iostream"
using namespace std;
class A
{
    public:
    void print();
    A()
    {
        cout<<"Just constructor";
    }
    
};

void A::print()
{
    int a=0;
    ++a;
    cout<<"\n"<<a;
}

int main()
{
    A obj;
    obj.print();
}
