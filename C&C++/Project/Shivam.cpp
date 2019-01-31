#include "iostream"
#include<stdio.h>
using namespace std;
struct student{
    int roll_no,hindi,english,math;
    char name[20];
};
int main()
{
    int i=0,j,roll_number;
    char ch;
    student s[10];
    do{
        cout<<"Enter Roll number ";
        cin>>s[i].roll_no;
        cout<<"Enter student name ";
        scanf("%s",&s[i].name);
        cout<<"Enter Hindi marks ";
        cin>>s[i].hindi;
         cout<<"Enter English marks ";
        cin>>s[i].english;
        cout<<"Enter maths marks ";
        cin>>s[i].math;
        i++;
        cout<<"Do you add more student information";
        cin>>ch;
    }while(ch=='y' || ch=='Y');

    cout<<"Enter roll number ";
    cin>>roll_number;

    for(j=0;j<i;j++)
    {
        if(s[j].roll_no == roll_number)
            cout<<s[j].name<<" "<<s[j].roll_no<<" "<<s[j].hindi<<" "<<s[j].english<<" "<<s[j].math<<endl;
    }
}