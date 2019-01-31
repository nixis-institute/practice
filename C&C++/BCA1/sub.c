#include<stdio.h>
void main()
{
    float hin,eng,math,science,totalm,per;
    printf("enter hindi marks ");
    scanf("%f",&hin);
    printf("enter eng marks ");
    scanf("%f",&eng);
    printf("enter math marks ");
    scanf("%f",&math);
    printf("enter science marks ");
    scanf("%f",&science);
    totalm=hin+eng+math+science;
    printf("%f\n",totalm);
    per=totalm/4;
    printf("%f\n",per);
    if (per>=0 && per<33)
    {
    printf("fail");
    }
    else if (per>=33 && per<40)
    {
        printf("d grade");
    }
    else if(per>=40 && per<50)
    {
        printf("c2 grade");
    }
    else if(per>=50 && per<60)
    {
        printf("c1 grade");
    }
    else if(per>=60 && per<70)
    {
        printf("b2 grade");
    }
    else if(per>=70 && per<80)
    {
        printf("b1 grade");
    }
    else if (per>=80 && per<90)
    {
        printf("a2 grade");
    }
    else if (per>=90 && per<100)
    {
        printf("a1 grade");
    }
    else 
    {
        printf("wrong marks");
    }


}