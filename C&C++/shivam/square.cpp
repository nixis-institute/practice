#include"iostream"
using namespace std;
int main()
{
    int a,b,rs;
    cout<<"enter a first value";
    cin>>a;
    cout<<"enter a second value";
    cin>>b;


    if(a==1){
    a=b*b;
    cout<<"the square is"<<a;
    }
    else if(a==2){
    a=b*b*b;
    cout<<"the cube is"<<a;
    }

    else{
    cout<<"you are a wrong";
    } 


}