#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter first valu");
    scanf("%d",&a);
    printf("enter second valu");
    scanf("%d",&b);
    if(a%2==0)
    {
        c=a+b;
        printf("sum of %d",c);
    }
    else
    {
        c=a-b;
        printf("sub of %d",c);
    }


    
}