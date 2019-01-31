#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter first valu");
    scanf("%d",&a);
    printf("enter second valu");
    scanf("%d",&b);
    if(a>b)
    {
        c=a+b;
        printf("sum of c %d",c);
    }
    else
    {
    c=a-b;
    printf("subtract of c %d",c);
    }
}