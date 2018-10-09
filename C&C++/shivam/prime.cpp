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

int A::input()
{
    cout<<"Enter any number";
    cin>>a;
    return a;

}

void A::divide(int x)
{

    int f=0,i;
    for(i=2;i<x;i++)
    {
            if(x%i==0)
            {
                f=1;
                break;

            }
    }
            if(f==1)
            {
                cout<<"number is not prime ";
            }
            else{

                cout<<"number is prime";
            }

    

}

int main()
{
    int a;
    A obj;
    a=obj.input();
    obj.divide(a);
    return 0;
}
