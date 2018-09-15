#include<stdio.h>
int main()

{

    int i,n,f=0;
    //char f;
    printf("Enter a nember:- ");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            f=1;
            break;
        }
        else
        {
            
            f=0;
        }
    }    

    if(f==0)
    {
        printf("a prime nember");
        
    }
    else
    {
        printf("not a prime nember");

    }    
 

    return 0;
        

}