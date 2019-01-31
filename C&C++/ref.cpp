#include "iostream"
using namespace std;
void changes(int x,int y,int sum)
{
    x = x+1;
    y = y+1;
    sum = x+y;
}


void change(int &x,int &y,int &sum)
{
    x = x +1;
    y = y+1;
    sum = x+y;
}
int main()
{
    int a,b,sum=0;
    a = 8;
    b = 9;
    changes(a,b,sum);
    cout<<sum<<endl;


    change(a,b,sum);
    cout<<sum;

}
bn b  