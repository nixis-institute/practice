#include<stdio.h>
int main()
{   int c,d,j,k;
    int a[3][3];
    printf("Enter 9 values");
    for(j=0;j<3;j++)
    {
        for(k=0;k<3;k++)
        {
            scanf("%d",&a[j][k]);
        }
    }

    for(int i=0;i<3;i++)
    {
        for(j=3;j>=0;j--)
        {
            if(i==j)
            {
                printf("%d\t",a[j][i]);
            }
            else{
                printf("\t");
            }
        }
        printf("\n");
    }

    // for(j=0;j<3;j++)
    // {
    //     for(k=0;k<3;k++)
    //     {  
    //         // if(j==1 && k==1)
    //         // {
    //         //     printf("%d",a[j][k]);
    //         // }
    //         // else if(j==2 && k==2)
    //         // {
    //         //     printf("%d",a[j][k]);
    //         // }
    //         // else if(j==3 && k==3)
    //         // {
    //         //     printf("%d\n",a[j][k]);
    //         // }


    //     }
    // }


    
}
