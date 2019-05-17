#include<stdio.h>
int isprime (int p)
{
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
        {
            return 0;
        }
    }
return 1;
}
void main()
{
    int val;
    printf("enter the no");
    
    scanf("%d",&val);
    /*
    {
    for(int i=1;i<val;i++)
    }*/  
    if(isprime(val))
    {
        printf("this is prime no");
    }
    else{
        printf("this is not prime no");
    }
}