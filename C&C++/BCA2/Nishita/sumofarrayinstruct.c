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
    printf("%d is your percentage ",per);
}
