
#include<stdio.h>
using namespace std;

int main()
{

    char a[30];
    int i,l;
    l=0;
    gets(a);

    for(i=0; a[i]!='\0';i++)
    {

        l++;

    }
    printf("string lenght : %d",l);

}