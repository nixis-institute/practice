#include "iostream"
using namespace std;
class First
{
    int vol1,vol2;
    int pet1,pet2;
    public:
    void sum()
    {
        int a1,a2,st1;
        int b1,b2,st2;
        a1=vol1,a2=vol2;
        b1=pet1,b2=pet2;
        cout<<"Enter two numbers for sum :- ";
        cin>>a1>>a2;
        cout<<"Enter two numbers for sum :- ";
        cin>>b1>>b2;
        st1=a1+b1;
        st2=a2+b2;
        cout<<"  "<<a1<<"  "<<a2<<"\n";
        cout<<"  "<<b1<<"  "<<b2<<"\n";
        cout<<"----------\n";
        cout<<"  "<<st1<<"  "<<st2<<endl;
        cout<<"----------"<<endl;
    }
}; 
class second:public First
{
    public:
    void substraction()
    {
        int a1,a2,st1;
        int b1,b2,st2;
        cout<<"Enter two number of substraction :- \n";
        cin>>a1>>a2;
        cout<<"Enter two number of substraction :- \n";
        cin>>b1>>b2;
        st1=a1-b1;
        st2=a2-b2;
        cout<<"  "<<a1<<"  "<<a2<<"\n";
        cout<<"  "<<b1<<"  "<<b2<<"\n";
        cout<<"----------\n";
        cout<<"  "<<st1<<"  "<<st2<<endl;
        cout<<"----------"<<endl;


    }
};

int main()
{
    second obj1;
    obj1.sum();
    obj1.substraction();

}