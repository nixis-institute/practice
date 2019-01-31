#include<stdio.h>
int main()
{
    float pro,dis,yourdis,tprice;
    printf("pls enter product price ");
    scanf("%f",&pro);
    printf("pls enter dis price");
    scanf("%f",&dis);
    yourdis=pro*dis/100;
    printf("discount is %f",yourdis);
    tprice=pro-yourdis;
    printf("final price is %f",tprice);


}