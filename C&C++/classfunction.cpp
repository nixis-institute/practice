#include "iostream"
using namespace std;
class A
{    
    public:
    int sum(int a,int b);
};
int A::sum(int a,int b)
{
    return a+b;
}


class A1:public A
{    
    public:
    int mul(int a,int b);
};
int A::mul(int a,int b)
{
    return a*b;
}




class B:public A1
{
    public:
    int subtract(int c,int d);
};

int B::subtract(int c,int d)
{
    return c-d;
}


int main()
{
    B obj;
    int a,b;
    a=5;
    b=9;
    cout<<obj.sum(a,b);
}