#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,g;
    printf("enter the hindi marks");
    scanf("%f",&a);
    printf("enter the english marks");
    scanf("%f",&b);
    printf("enter the maths marks");
    scanf("%f",&c);
    printf("entr the sst marks");
    scanf("%f",&d);
    printf("entr the science marks");
    scanf("%f",&e);
     f=a+b+c+d+e;
     //printf("%d",f);
    printf("the total marks of subjecte's");
    printf("\n%f",f);
    g=f/5;
    printf("\n%f",g);
    

}