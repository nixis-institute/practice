#include<stdio.h>
#include<string.h>
int main()
{
    char f[50],s[50];
    int st;
    printf("Enter a string value:- ");
    gets(f);
    printf("Enter a string value:- ");
    gets(s);
    st=strcmp(f,s);
    //printf("%d",st);
    if(st==0)
    {
        printf("Condition is true");
    }
    else
    {
        printf("Condition is not true");
    }
    

}