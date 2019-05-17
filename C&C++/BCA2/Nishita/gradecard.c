#include<stdio.h>
int main()
{
    int arr[6],i,st=0,per;
    printf("Enter the elements of array :- ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
        st=st+arr[i];
    }

     per=st/6;
     printf("%d is your perchange\n",per);

        if(per>= 80 && per<100)
        {
            printf("You got A grade");
        }
        else if(per>=60 && per<=79)
        {
            printf("you got B grade");
        }    
        else if(per>40 && per<=59)
        {
            printf("you got C grade");
        }
        else if(per>33 && per<=39)
        {
            printf("you got D grade");    
        }
        else
        {
            printf("you got fail");
        }
}
