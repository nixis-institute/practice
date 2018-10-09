#include "iostream"
using namespace std;
class calculation
{
    private:
    int a,b;
    public:
     void mul(int);
     int input();
};
int calculation::input()
{
    cout<<"enter the first value";
    cin>>a;
    cout<<"enter the secound value";
    cin>>b;
 
    return(a*b);
}
void calculation::mul(int x)
{
    cout<<"\n\n multiplication"<<x;
    
}
int main()
{
calculation object;
int a;
a=object.input();
object.mul(a);
return 0;
}

