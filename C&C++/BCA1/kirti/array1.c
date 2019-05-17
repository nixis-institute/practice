#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j;
    {
        printf("enter the valu");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }


    for(i=0;i<3;i++)
    {                                                      
        for(j=0;j<=i;j++) 
        {
            printf("%d\t",a[i][j]);
        } 
          printf("\n");
    }


    
}