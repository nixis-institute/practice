#include<stdio.h>
struct student
{
    int age;
    float marks;
    char name[20];
};
int main()
{
    struct student s;
    printf("enter the age");
    scanf("%d",& s.age);
    printf("enter the marks");
    scanf("%f",& s.marks);
    printf("enter the name");
    scanf("%s",& s.name);
    printf("%d",s.age);
    printf("%f",s.marks);
    printf("%s",s.name);
}