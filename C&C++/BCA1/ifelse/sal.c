#include <stdio.h>
void main ()
{
    float sal,gross_sal,net_sal,pf,pfv,es,esv,hra,hrav,da,dav,ta,tav;
    printf("enter your sal ");
    scanf("%f",&sal);
    printf("enter your pf ");
    scanf("%f",&pf);
    printf("enter your es ");
    scanf("%f",&es);
    printf("enter your hra ");
    scanf("%f",&hra);
    printf("enter your da ");
    scanf("%f",&da);
    printf("enter your ta ");
    scanf("%f",&ta);
    pfv=sal*(pf/100);
    esv=sal*(es/100);
    hrav=sal*(hra/100);
    dav=sal*(da/100);
    tav=sal*(ta/100);
    gross_sal=sal+hrav+dav+tav;
    printf(" gross sal is%f\n",gross_sal);
    net_sal=gross_sal-pfv-esv;
    printf("net sal is%f",net_sal);
}