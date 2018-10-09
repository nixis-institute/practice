#include"iostream"
using namespace std;
class A
{
    private:
    int a,b,c,i;
    public:
    void divide(int);
    int input();
};
int A:: input()
{
    cout<<"enter the value: ";
    cin>>a;
    return a;
}
void A::divide(int x)
{
   int f=0;
    for(i=2;i<x;i++)
    {
        if(x%i==0);
        {
            f=1;
        break;
        }
        
    }
     if(f==1)
     {
         cout<<"not prime";
     }
     else
     {
         cout<<"prime";
     }
}
int main()
{
    A object;
    int a;
    a=object.input();
    object.divide(a);
    return 0;
}