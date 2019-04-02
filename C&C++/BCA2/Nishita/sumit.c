#include<stdio.h>
int main()
{
    float discount, price;
    printf("enter the product price ");
    scanf("%f ",&price);
    if(price>5000)
    {
        discount=price*0.1;

    }
    else{
        discount=price*0.5;
    
}
printf("total discount is %f",discount);

}