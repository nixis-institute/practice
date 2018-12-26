#include "iostream"
using namespace std;
struct a1{
    int array[3];
} a2;
struct b1{
    int array[3];
} b2;
struct c1{
    int array[3];
} b3;



int main(){
    //int a[3],s=0;
    
    cout<<"enter a 1 value";
    for(int i=0;i<3;i++)
    {
        //cout<<a[i];
        cin>>a2.array[i];
    }
    cout<<"enter a 2 value";
    for(int i=0;i<3;i++) 
    {
        cin>>b2.array[i];
    }   
    for(int i=0;i<3;i++)
    {
        //s=a[i]+a[i];
        //cin>>s;
        b3.array[i]=a2.array[i]+b2.array[i];
        cout<<b3.array[i];
    }
}
