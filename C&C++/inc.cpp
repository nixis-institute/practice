#include "iostream"
//#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,d;
    a = 3;
    d = ++a + a++ + --a + ++a;
    cout<<d;
    return 0;
}