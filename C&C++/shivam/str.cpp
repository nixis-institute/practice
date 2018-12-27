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

    
    cout<<"enter a 1 value";
    for(int i=0;i<3;i++)
    {
        
        cin>>a2.array[i];
    }
    cout<<"enter a 2 value";
    for(int i=0;i<3;i++) 
    {
        cin>>b2.array[i];
    }   
    cout<<"********************************\n";        
    for(int i=0;i<3;i++)
    {
    
      
        b3.array[i]=a2.array[i]-b2.array[i];
        cout<<b3.array[i];

    }
}
