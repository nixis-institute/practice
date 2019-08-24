#include<stdio.h>
#include<conio.h>
int ret()
{
    const long a=0;
    static long sum=0;
    //printf("%d\n",sum);
    sum++;
    return sum;
    return a;
    //return 0;
}
int main()
{
    printf("%d\n",ret());
    printf("%d\n",ret());
    printf("%d\n",ret());
    printf("%d\n",ret());
}
