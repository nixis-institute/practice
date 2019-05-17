#include<stdio.h>
int main ()
{
    int i,j,a,b,c;
    printf("enter the first NO");
    scanf("%d",&a);

    printf("enter the second NO");
    scanf("%d",&b);
    if(a>b)
    {
        c=a-b;
        //printf("%d",c);
    }
    else 
    {
        c=a+b;
    }

    for(i=1;i<=c;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
            
}