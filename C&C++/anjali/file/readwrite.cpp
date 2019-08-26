#include <fstream>
#include <iostream>
#include<stdio.h>
using namespace std;
 
int main () {
   char data[100];

   ofstream outfile;
   outfile.open("afile.dat");
   char ch='y';
   
    while(ch=='y')
    {
        cout << "Enter your name: ";
        // cin.getline(data, 100);
        gets(data);
        outfile << data << endl;;.
        cout << "Enter your age: "; 
        cin >> data;
        outfile << data << endl;
        cout<<"Do you want to continue ";
        cin>>ch;
        cin.ignore();
    }
   // close the opened file.
   outfile.close();
   return 0;
}