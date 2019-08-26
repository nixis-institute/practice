#include<stdio.h>
#include<conio.h>
int main()
{
    float a,disc,total,amt;
    printf("Enter a Value :- ");
    scanf("%f",&a);

    if (a>250 && a<=500)
    {
        amt = a*0.1;
        printf("Discount is %f",amt);
    }
    else if(a>500 && a<=750)
    {
        amt =a*0.2;
        printf("Discount is %f",amt);
    }  
    else if(a>750 && a<=1000)
    {
        amt =a*0.3;
        printf("Discount is %f",amt);
    }
    else 
    {
        printf("you have no discounts");
    }
        //printf("%f",amt)
        total = a-amt;
        //printf("Discount is %f",amt);
        printf("Amount to be paid is");
        printf("E");
}

