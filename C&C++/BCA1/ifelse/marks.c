#include<stdio.h>
void main()
{
    int marks;
    printf("enter your ma rks ");
    scanf("%d",&marks);
    if (marks>=0 && marks<33)
    {
        printf("fail");
    }
    else if(marks>=33 && marks<40)
    {
        printf("d grade");
    }
    else if(marks>=40 && marks<50)
    {
        printf("c2 grade");
    }
    else if (marks>=50 && marks<60)
    {
        printf("c1 grade");
    }
    else if (marks>=60 && marks<70)
    {
        printf("b2 grade");
    }
    else if (marks>=70 && marks<80)
    {
        printf("b1 grade");
    }
    else if (marks>=80 && marks<90)
    {
        printf("a2 grade");
     }                                          
    else if (marks>=90 && marks<100)
    {                   
            printf("a1 grade");
    }    
    else
    {
        printf("wrong marks");
    }
    
}   
    
