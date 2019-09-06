#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}

int fact(int f)
{
    int i,s=1;
    for(i=1;i<=f;i++)
    {
        s = s * i;
    }
    return s;
}

void main()
{
    int a,b,c;
    a = 5;
    c = fact(6);
    printf("%d",c);
}