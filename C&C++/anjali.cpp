#include "iostream"
using namespace std;
class A
{
    private:
    int a,b,c;
    public:
    void sub(int);
    int input();
};
    int A::input()
{
    cout<<"enter the first value";
    cin>>a;
    cout<<"enter the secound value";
    cin>>b;
    return(a-b);
}
void A::sub(int x)
{
    cout<<"\n\n substrection"<<x;
}
int main()
{
    A object;
    int a;
    a=object.input();
    object.sub(a);
    return 0;
}