#include<stdio.h>
int main()
{
    int i,t,sum=0;
    printf("enter the valu ");
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        sum = sum +i;
        //printf("%d\n",i*t);
    }
    printf("%d",sum);
}
