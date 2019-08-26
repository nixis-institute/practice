#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b;
     a=abs(1234);
     b=abs(5678);
     cout<<"1234 is stored at a variable :- "<<a<<endl;
     cout<<"5678 is stored at b variable :- "<<b<<endl;
     cout<<labs(a)<<endl;
     cout<<labs(b);
}