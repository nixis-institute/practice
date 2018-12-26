#include "iostream"
using namespace std;
int main()
{
    int track[]={10,20,30,40},*stricker;
    
    stricker=track;

    //cout<<stricker;

    track[1]+=30;
    
    
    cout<<"stricker"<<*stricker<<endl;
    
    *stricker-=10;


    stricker++;
    
    cout<<"next@"<<*stricker<<endl;

    stricker+=2;
    
    cout<<"last@"<<stricker<<endl;
    return 0;
}
