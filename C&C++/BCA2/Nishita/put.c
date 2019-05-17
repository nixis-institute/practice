#include<stdio.h>
#include<string.h>
int main()
{
    //int a=9;
    char a[]={'R','a','h','u','l','k','u','m','a','r'};
    int st=strlen(a);
    printf("%d is your lenth \n",st);
    char b[20];
    strcpy(b,a);
    printf("%s is copying A on B \n",b);
    strcat(a,b);
    printf("%s is joining toghter",a);

}
