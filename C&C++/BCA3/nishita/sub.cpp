#include<iostream>
using namespace std;
class abc
{
    public:
    void sub();
};
void abc::sub()
{
    int a=14, b=10,c;
    c = a-b;

    cout <<c;
}
int main()
{
    int st;
    abc a;
    a.sub();
}