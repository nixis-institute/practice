#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
    float a,b,c,d,e;
    float f,g,st;
    printf("enter a value");
    scanf("%f",&a);
    printf("enter a value");
    scanf("%f",&b);
    printf("enter a value");
    scanf("%f",&c);


    st = (b*b-4*a*c);
    d =  sqrt(st);
    e = 2*a;
    f = (-b+d)/e;
    g = (-b-d)/e;
    printf("%f\n",f);
    printf("%f",g);
}