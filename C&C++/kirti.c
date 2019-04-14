# include<stdio.h>
int main()
{
    int i,n,f=1;
    printf("enter any valu");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    printf("factorial is %d ",f);
}