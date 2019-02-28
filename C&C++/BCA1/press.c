#include<stdio.h>
void main()
{
    int valu1,valu2,choice,result;
    printf("enter first valu ");
    scanf("%d",&valu1);
    printf("enter second valu ");
    scanf("%d",&valu2);
    printf("press 1 for sum\n");
    printf("press 2 for sub\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for diision\n");
    printf("enter your choice");
    scanf("%d",&choice);
    if(choice==1)
    {
        result=valu1+valu2;
    }
    else if(choice==2)
    {
        result=valu1-valu2;
    }
    else if(choice==3)
    {
        result=valu1*valu2;
    }
    else if(choice==4)
    {
        result=valu1/valu2;
    }
    else
    {
        printf("wrong marks");
    }
    printf("your result %d",result);
}   
  
