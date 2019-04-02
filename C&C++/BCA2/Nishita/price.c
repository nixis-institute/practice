#include<stdio.h>
void main()
{
float price,product,tprice,tnp,dis;
printf("enter the no of price");   
scanf("%f",&price);
printf("enter the no of product");
scanf("%f",&product);
tprice=price*product;
printf("tprice is%f\n",tprice);
dis=tprice*10/100;
printf("dis is %f\n",dis);
tprice=tprice-dis;
printf("tprice is %f\n",tprice);
}