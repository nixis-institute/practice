#include<stdio.h>
int main()
{
    int len=1,i;
    char name[50];
    printf("enter your full name ");
    gets(name);
    for(i=1;name[i]!='\0';i++)
{
    len++;
}  
   printf("%d",len);     
}