#include<iostream>
using namespace std;

class Total
{
    public:
    void sum(int a)
    {
        int i,n,j,st=0;
        for(i=1;i<=a;i++)
        {
            n=a;
            if(i==a)
            {
                cout<<"\b"<<"=";
            }
            else
            {
                cout<<i<<"+";
            }
            st=st+i;
        }
        cout<<st;
    }

};
int main()
{
    Total obj1;
    int n;
    cout<<"Enter a value :- ";
    cin>>n;
    obj1.sum(n);
}
