#include "iostream"
#include <string.h>
#include <stdio.h>
using namespace std;
int main()
{
    char st[50];
    int i,j=0;
    cout<<"Enter line";
    //scanf("%s",&st);
    gets(st);
    for(i=0;i<strlen(st);i++)
    {
        if(st[i]==255)
        {
            //cout<<j;
            j++;
            //cout<<"enter a string"<<(j+1);
        }
    
    }
    cout<<"number of spaces is "<<j;
}