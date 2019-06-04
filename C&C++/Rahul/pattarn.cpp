#include "iostream"
using namespace std;
//int main()
class pattarn
{
    public:
    void pattarnprintf()
    {
    int i;
    for(i=1;i<=1;i++)
    {
        cout<<"*"<<"  "<<endl;
    }
    for(i=1;i<=2;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=3;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=4;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=5;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=6;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=7;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=8;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=9;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    for(i=1;i<=10;i++)
    {
        cout<<"*"<<"  ";
    }
    cout<<endl;
    
    }
};

class pattarn1:public pattarn
{
    public:
    void pattarn2()
    {
        int i,j;
        for(i=1;i<=10;i++)
        {
            for(j=10;j>i;j--)
            {
                cout<<"*"<<"  ";
            }
            cout<<endl;
        }
    }
};
int main()
{
    pattarn1 obj1;
    obj1.pattarnprintf();
    obj1.pattarn2();
}