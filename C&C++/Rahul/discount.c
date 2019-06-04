#include<stdio.h>
int main()
{
    int age;
    float discount,net_amount,amount;
    printf("Enter your age :- ");
    scanf("%d",&age);
    printf("***********************************************************\n");
    printf("Enter your amount :- ");
    scanf("%f",&amount);
    printf("***********************************************************\n");
    if(age > 50)
    {
        discount=amount*0.10;
        printf("Your discount is %f\n",discount);
    }
    else if(age <= 50 && age >= 14 )
    {
        discount=amount*0.20;
        printf("Your discount is %f\n",discount);
    }
    else if(age<14)
    {
       discount=amount*0.50;
        printf("your discout is %f\n",discount);
    }
    else
    {
        printf("you entered a wrong value\n");
    }
    printf("***********************************************************\n");
    net_amount=amount-discount;
    printf("Your total amount is %f with discount\n",net_amount);
    printf("***********************************************************\n");
}