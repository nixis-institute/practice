#include<stdio.h>
int main()
{
    float pro,dis,your_dis,tprice;
    printf("enter pro price");
    scanf("%f",&pro);
    printf("enter dis price");
    scanf("%f",&dis);
    your_dis=pro*dis/100;
    printf("%f\n",your_dis);
    tprice=pro-your_dis;
    printf("%f",tprice);
}