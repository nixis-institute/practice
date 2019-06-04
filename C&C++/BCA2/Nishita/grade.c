#include<stdio.h>
int main()
{
    int array[6],i,per,st=0;
    printf("enter the elements of array:-   ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        st=st+array[i];
    }
    per=st/6;
    printf("%d is your prechange\n",per);
    if(per>= 80 && per<100 )
    {
        printf("you got A grade");
    }
    elseif(per>=60 && per<=79)
    {
        printf("you got B grade");
    }
      elseif(per>40 && per<=59)
      {
          printf("you got C grade");
      }
      elseif(per>33 && per<=39)
      {
          printf("you got D grade");
      }
      else
      {
          printf("you got fail");
      }
}