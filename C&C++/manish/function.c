#include<stdio.h>

int power(int a,int b)
{   int i,f=0;
    for(i=1;i<=b;i++)
    {
        f=f+(a*a);
    }
    
    return f;

    // printf("The result :- %d",c);
}

int prime(int n)
{
    int i;
    int x;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
           return 0;
        }
    }
    return 1;
}

int main()
{   
    int x,z;
    printf("Enter a value");
    scanf("%d",&z);
    x=prime(z);
    if(x==1)
    {
        printf("%d is prime",z);

    }
    else
    {
        printf("%d is not prime",z);
    }
    



    // int x,y,z;
    // printf("Enter a value :- ");
    // scanf("%d",&x);
    // printf("Enter a value :- ");
    // scanf("%d",&y);
    // z = power(x,y);
    // printf("%d",z);



    
}