#include<stdio.h>
int main()
{
int a[5],b[5],c[5],i;
    printf("Enter first array values\n");
   for(i=0;i<5;i++)
   {
       scanf("%d",&a[i]);
   }

   printf("Enter second array values\n");
   for(i=0;i<5;i++)
   {
       scanf("%d",&b[i]);
   }
   for(i=0;i<5;i++)
   { 
       c[i]=a[i]+b[i];
   }
   printf("sum of two array is below\n");
   for(i=0;i<5;i++)
   {
       printf("%d\t",c[i]);
   }
}