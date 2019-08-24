#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    char data[100];
   ifstream infile; 
   infile.open("afile.dat");  
   cout << "Reading from the file" << endl; 
    while (infile)
    {
        infile >> data; 
        cout << data << endl;
        infile >> data; 
        cout << data << endl; 
    }
    infile.close();
}
