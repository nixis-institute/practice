#include<stdio.h>
int main()
{
    int n,i;
    char f;
    printf("Enter the value ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f='Y';
            break;
        }
        else{
            f='N';
        }
    }
    if(f=='Y'){
        printf("Not a prime number");
    }
    else{
        printf("prime number");
    }

 return 0;
}