#include<stdio.h>
void msg()
{
    printf("welcome to amazing array");
}
int sum (int a,int b)
{
    int c;
    c=a+b;
    return c;
}
{
    int c;
    c=a*a*a;
    return c;
}
void main()
{
    int a,b,res;
    
    printf("enter first valu");
    scanf("%d",&a);
    printf("enter second valu");
    scanf("%d",&b);
    res=sum(a,b);

}
