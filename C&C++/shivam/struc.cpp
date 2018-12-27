#include "iostream"
using namespace std;
struct student{
    int hour;
    char minute;
    float second;
}st;
int main()
{
    int h1,m1,s1,h2,m2,s2;
    cout<<"enter hour ";
    cin>>h1;
    cout<<"enter a minute";
    cin>>m1;
    cout<<"enter  a second";
    cin>>s1;

    cout<<"enter  hour ";
    cin>>h2;
    cout<<"enter a minute";
    cin>>m2;
    cout<<"enter  a second";
    cin>>s2;


    h1 = h1+h2;
    m1 = m1+m2;
    s1 = s1+s2;

    cout<<"hour is "<<h1%12;
    cout<<"minutes is "<<m1%60;
    cout<<"seconds is "<<s1%60;

}