#include "iostream"
#include "fstream"
using namespace std;
int main()
{
    fstream fs;
    //fs.open("new.txt",ios::out); used for creation the file
    //fs.open("new.txt",ios::in); used for reading file from computer
    fs.open("new1.txt",ios::out);
    fs.seekg(4,ios::beg); //change the position of current file
    fs<<" new txt";
    //cout<<"this is position "<<fs.tellp();
    char ch;
    //fs<<"hello world\n this is an next line ";
    
    while(!fs.eof())
    {
        fs>>ch;
        
        //fs<<"hello wlksdlkf\n sdf "; /// write
        
        cout<<ch;
    }
    fs.close();
    return 0;
}