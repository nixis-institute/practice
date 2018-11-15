#include "iostream"
using namespace std;
/*

int multiply(int a, int b)
{
    return a*b;
}

float div(int a, int b)
{
    return a/b;
}



*/


int fact(int f)
{
    int i,s=1;
    for(i=1;i<=f;i++)
    {
        s=s*i;
    }
    return s;
}

int main()
{
    int val,result;
    cout<<"Enter the value ";
    cin>>val;
    result = fact(val);
    cout<<"Factorial is "<<result;

}