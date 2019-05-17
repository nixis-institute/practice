#include<stdio.h>
int main()
{
    char name[40];
    gets(name);
    int strlen;
    l=len(name);
      for(int i=0;i<l;i++)
    {
      if(name[i]>=65&&name[i]<=90)
          {
              name[i]=name[i]+32;       
    
          }    
    }
}