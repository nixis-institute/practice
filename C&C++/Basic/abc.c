#include<stdio.h>
void main()
{
    int bill,disc,a,b;
    scanf("%d",&bill);
    scanf("%d",&disc);
    disc = bill*disc/100;
    b = bill-disc;
    printf("final amount is %d",b); 
};
