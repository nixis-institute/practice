#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int length;
    printf("enter your name");
    gets(name);
    length strlen(name);
    printf("your name has %d characters \n",length);
}