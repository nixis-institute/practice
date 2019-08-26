#include<iostream>
#include<conio.h>
// #include<stdlib.h>
// #include<fstream.h>
#include<fstream>
using namespace std;

int main()
{
    int i,marks,cls;
    char ch[20],space;
    ifstream fin;

    fin.open("fff.txt",ios::in);

    while(fin)
    {
        fin.get(ch,20);
        fin.get(space);
        fin>>cls;
        fin.get(space);
        fin>>marks;
        fin.get(space);
        cout<<ch<<"\t"<<cls<<"\t"<<marks<<"\n";
    }
    return 0;
}