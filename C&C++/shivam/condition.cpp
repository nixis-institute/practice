#include "iostream"
using namespace std;
int main()
{
    int val1,val2,ch,rs;
    cout<<"Enter the first value ";
    cin>>val1;
    cout<<"Enter the second value ";
    cin>>val2;
    cout<<"Enter your choice ";
    cin>>ch;


    if(ch==1){
        rs = val1+val2;
        cout<<"Sum is "<<rs;
    }
    else if(ch==2){
        rs=val1*val2;
        cout<<"multiplication is"<<rs;
    }
    else if(ch==3){
        rs=val1-val2;
        cout<<"subtaction is"<<rs;
    }
    else if(ch==4){
    rs=val1/val2;
    cout<<"division is"<<rs;
}
else{
cout<<"you are a wrong";
}
}