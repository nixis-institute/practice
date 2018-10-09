#include"iostream"
using namespace std;
class A
{
    private:
    int a,b,i,c;
    public:
    void mul(int);
    int input();
};
int A::input()
{
    cout<<"enter the  value";
    cin>>a;
}
void A:: mul(int x)
{
    for(i=1;i<=10;i++)
    {
        c=i*a;
        cout<<c<<endl;
    }
    //cout<<"\n\n multiplication"<<x;
}
int main()
{
    A object;
    int a;
    a=object.input();
    object.mul(a);
    return 0;
}




