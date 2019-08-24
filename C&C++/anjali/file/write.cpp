#include<fstream>
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    ofstream fout("fff.txt",ios::out);   
    char name[20];
    int cls,marks;
    for(int i=0;i<5;i++)
    {
        cout<<"Name"<<"\t"<<"Class"<<"\t"<<"Marks"<<"\n"; 
        cin.get(name,20);
        cin>>cls;
        cin>>marks;
        fout<<name<<" "<<cls<<" "<<marks<<" ";
    }

    fout.close();
}