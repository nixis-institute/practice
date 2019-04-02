#include<stdio.h>
int main()
{
float average;    
float marks,hindi,english,maths,sst,science;
printf("enter the no of hindi");
scanf("%f",&hindi);
printf("enter the no of english");
scanf("%f",&english);
printf("entr the no of maths");
scanf("%f",&maths);
printf("enter the no of sst");
scanf("%f",&sst);
printf("enter the no of sciene");
scanf("%f",&science);
marks=hindi+english+maths+sst+science;
average=marks/5;
printf("percentage is %f\n",average);
printf("total marks is %f",marks);
}