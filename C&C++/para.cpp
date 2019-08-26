#include <iostream>
using namespace std;
class ABC{
    int a,b,c;
    
    public:
    ABC(int x=0, int y=0)
    {
        a=x;
        b=y;
    }
    void print()
    {
        cout<<"value of a"<<a;
        cout<<"valu  of b"<<b;
    }
};

int main()
{
    ABC obj(4,5);
    obj.print();
    
}

 