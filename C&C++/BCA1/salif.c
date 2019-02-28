#include<stdio.h>
void main()
{
    float sal;
    printf("enter your salary ");
    scanf("%f",&sal);
   
    if(sal<=15000)
    {
        sal=sal-sal*0.06;
    }
    else if(sal>15000 && sal<30000)
    {
        sal=sal-sal*0.1;
    }
    else
    {
        sal=sal-sal*0.12;
    }
    printf("salary is %f",sal);
}

