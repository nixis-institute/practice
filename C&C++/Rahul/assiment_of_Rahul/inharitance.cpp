#include "iostream"
using namespace std;
class A
{
    public:
    void print()
    {
        cout<<"Just print";
    }
};
class B:public A
{
    public:
    void printf2()
    {
        cout<<"just print another";
    }
};
int main()
{
    B obj1;
    obj1.printf2();
}