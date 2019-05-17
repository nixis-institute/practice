#include<stdio.h>
int main()

{
        char operator;
        int num1,num2;
        printf("Enter an operator :- ");
        scanf("%c", &operator);
        printf("Enter two values :- ");
        scanf("%d%d",&num1,&num2);
        switch(operator)
        {
            case '+':
            printf(" %d + %d = %d ",num1,num2,num1+num2);
            break;
            case '-':
            printf("%d - %d = %d",num1,num2,num1-num2);
            break;
            case '/':
            printf("%d / %d = %d",num1,num2,num1/num2);
            break;
            case '*':
            printf("%d * %d = %d",num1,num2,num1*num2);
            break;
            default:
            printf("You have entered a wrong value");
        }
}