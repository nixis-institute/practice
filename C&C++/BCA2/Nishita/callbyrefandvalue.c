#include<stdio.h>
void increment(int a)
{
    a++;
}
    void refincrement(int *a)
    {
        *a= *a+1;
    }
void main()
{
    int  x=10;
    increment (x);
    printf("%d\n",x);
    refincrement(&x);
    printf("%d",x);
}

    
