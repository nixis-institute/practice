#include<stdio.h>
int main()
{
    int l[100],n,i,flag  = 1;
    printf("Enter number of students -> ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&l[i]);
    }

    for(i=1;i<n;i++)
    {
        if(i<n-1)
        {

            if(l[i]<l[i+1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
       }

    }
    if(flag ==1)
    {
        printf("Yes");
    }
    else
    {
        printf("no");
    }
    

}