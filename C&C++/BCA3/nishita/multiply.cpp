#include<iostream>
using namespace std;
class abc
{
    public:
    void multiply();
};
void abc::multiply()
{
    int a=10,b=2,c;
    c=a*b;
    cout<<c;
}
int main()
{
    abc a;
    int st;
    a.multiply();
}