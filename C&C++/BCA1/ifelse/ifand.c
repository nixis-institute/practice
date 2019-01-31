#include<stdio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks>=0 && marks<33)
    {
        printf("You are Fail");
    }
    else if(marks>=33 && marks <=50)
    {
        printf("C Grade");
    }
    else if(marks>50 && marks <=80)
    {
        printf("B grade");
    }
    else if(marks>80 && marks<=100){
        printf("A grade");
    }
    else{
        printf("wrong marks");
    }
}