#include<stdio.h>
int main()
{
    int a[6],b[6],c[6];
    for(i=0;i<6;i++)
{
   scanf("%d",&a[i]);   
}
   for(i=0;i<6;i++)
{
  scanf("%d",&b[i]);
}
   for(i=0;i<6;i++)
 {
    c[i]=a[i]+b[i]; 
 }  
   for(i=0;i<6;i++)
   printf("%d",c[i]);
}