#include<iostream>
#include<cstdio>
int main()
{
    int st;
    FILE *open;
    open=fopen("read.txt","r");
    if(open)
    {
        while(feof(open)=='\0')
        {
            st=getc(open);
            putchar(st);
        }
    }
    else
    {
        perror("Filing opening failed");
        fclose(open);
    }    
    return 0;
}