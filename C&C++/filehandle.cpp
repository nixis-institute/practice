#include "iostream"
#include "fstream"
#include "string"
using namespace std;
std::ifstream input( "filename.ext" );
//using namespace std::basic_ifstream;
int main()
{
    //fstream fs;
    //fs.open("new.txt",ios::out); used for creation the file
    //fs.open("new.txt",ios::in); used for reading file from computer
    //fs.open("new1.txt",ios::out);
    //fs.seekg(4,ios::beg); //change the position of current file
    //fs<<" new txt";
    //cout<<"this is position "<<fs.tellp();
    ifstream  fs;
    fs.open('new.txt');
        
    
    //fs.open("new.txt",ios::in);
    char ch;
    //fs<<"hello world\n this is an next line ";
    if(fs.is_open())
    {
        while( )
        {
            cout<<line;
        }
    }    
    fs.close();
    return 0;
}