#include <stdio.h>
int main()
{
    int a,b,c,big;
    printf("enter first valu");
    scanf("%d",&a);
     printf("enter second valu");
    scanf("%d",&b);
     printf("enter third valu");
    scanf("%d",&a);
    if(a>b)
    {
        big=a;
    }
    else
    {
        big=b;
    }

if(big>c)
{
    printf("greater valu %d",big);
}
else
{
    printf("greater %d",c);
}
    
}