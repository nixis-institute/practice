#include "iostream"
using namespace std;
class calculation{
    public:
    
    
    int sub(int c,int d)
    {
            
            return c-d;
    }

};


int main()
{
 calculation obj;
 int a,b;
 cout<<"enter the first value";
 cin>>a;
 cout<<"enter the secound value";
 cin>>b;
 cout<<obj.sub(a,b);
 return 0;
}






