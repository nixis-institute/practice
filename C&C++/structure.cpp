#include "iostream"
#include <stdio.h>
using namespace std;
struct Science{
    float bio;
    float phy;
    float chem;
};
struct Marks{
    float hindi;
    float english;
    Science science;
    //float science;
};

struct student{
    int age;
    Marks marks;
    char name[20];
};

/*union teacher{
    int age;
    float marks;
    char name[20];
};*/

int main()
{
    student s;
    //teacher t;
    //cout<<"size of structure "<<sizeof(s)<<" size of union "<<sizeof(t);
    cout<<"Enter your name";
    gets(s.name);
    cout<<"Enter your age";
    cin>>s.age;
    cout<<"Enter your hindi marks";
    cin>>s.marks.hindi;
    cout<<"Enter you bio marks";
    cin>>s.marks.science.bio;
    cout<<"Name : "<<s.name<<" age : "<<s.age<<" marks : ";

}