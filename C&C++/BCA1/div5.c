#include <stdio.h>
void main()
{
    int num;
    printf("enter number");
    scanf("%d",&num);
    if(num%5==0 && num%11==0)
    {
        printf("num is divible by 5 and 11");
    }
    else
    {
        printf("num is not divisible by 5 and 11");
    }
    
}