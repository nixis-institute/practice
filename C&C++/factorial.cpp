#include "iostream"
using namespace std;
class calculation
{
    private:
    int a,b;
    public:
    void sum(int);
    int input();
};
int calculation::input()
{
    cout<<"enter the first value";
    cin>>a;
    cout<<"enter the secound value";
    cin>>b;
    return (a+b);
}
    void calculation::sum(int x)
    {
        cout<<"\n\n the sum :"<<x;
    }
    int main()
    {
        calculation object;
        int a;
        a=object.input();
        object.sum(a);
        return 0;
    }

