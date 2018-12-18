#include "iostream"
using namespace std;
void sum(int a,int b)
{
    int c;
    if(a>b){

    c=a+b;
    cout<<"the sum is"<<c;
}
 else if(b>a){
    c=a-b;
    cout<<"the sub is"<<c;
}
else{
    c=a*b;
    cout<<"the multiply is"<<c;
}
}
int main()
{
    int x,y;
    cout<<"enter a value";
    cin>>x>>y;
    
    sum(x,y);
}



