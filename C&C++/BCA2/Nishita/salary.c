#include<stdio.h>
int main()
{
float salary,hra,pr,hrap,pfp,netsal,grossal;
printf("enter the no of salary");
scanf("%f",&salary);
printf("enter the no hra");
scanf("%f",&hra);
printf("enter the no of pr");
scanf("%f",&pr);

hrap = salary*hra/100;
pfp = salary*pr/100;

grossal = salary+hrap;
netsal= grossal-pfp;
printf("gross salary is %f\n",grossal);
printf("net salary is %f",netsal);
}

