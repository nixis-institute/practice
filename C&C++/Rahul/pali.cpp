#include<stdio.h>
int main()
{

    int en,tem,st,res=0;

    printf("Enter a value:- ");
    scanf("%d",&en);
    tem=en;
    while(en>0)
    {
        st=en%10;
        en=en/10;
        res=(res*10)+st;
    }

    if(res==tem)
    {
        printf("It is a palindrome");
    }
    else
    {
        printf("not a palindrome");
    }
    return 0;




}