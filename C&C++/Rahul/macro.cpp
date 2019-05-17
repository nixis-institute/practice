#include "iostream"
#define square(x) x*x;  //macro
#define sum(x,y) x+y;   //macro
#define msg() cout<<"hello world";


using namespace std;
//int squre
int sum(int a,int b);
int main()
{
    int a = 9,b=8,c;
    c = sum(a,b);


    c = sub(a,b);

    cout<<c;
//    cout<<st;
}
int sub(x,y)
{
    return x-y;
}