// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {
  //ofstream myfile;
//   ofstream myfile;
//   myfile.open ("example.txt");
//   myfile << "Writing this to a file.\n";
//   myfile.close();
//   return 0;
    ostream files;
    files.open("My file.txt");
    files<<("It is in my file");
    files.close();
    return 0;

}