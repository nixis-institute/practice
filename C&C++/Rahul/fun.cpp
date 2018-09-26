#include <stdio.h>
void msg()
{
    printf("*********************Hello welcome to my program**********************\n");
}

int sumton(int a)
{
    int i,s=0;
    for(i=0;i<=a;i++)
    {
        s=s+i;
    }
    return s;
}

int addition(int x,int y)
{
    return x+y;
}


int main()
{
    msg();
    int i,n,sum,s;
    scanf("%d",&n);
    sum = sumton(n);
    s = addition(5,6);
    printf("%d  %d",sum,s);
    return 0;
}