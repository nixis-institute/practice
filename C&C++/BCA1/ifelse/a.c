#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first valu");
    scanf("%d",&a);
    printf("enter second valu");
    scanf("%d",&b);
    if(a>b)
    {
        c=a+b;
        printf("sum of %d",c);

    }
    else if(a<b)
    {
        c=a-b;
        printf("subtract of %d",c);
    }
    else
    {
        c=a*b;
        printf("multiply of %d",c);
    }
}
