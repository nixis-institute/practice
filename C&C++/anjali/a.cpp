#include "iostream"
using namespace std;
class Abc{
    public:
        void print()
        {
            cout<<"Hello world";
        }
        void show()
        {
            cout<<"this is from show function";
        }
        int sum(int a,int b)
        {
            return a+b;
        }

};

int main()
{
    Abc obj;
    cout<<obj.sum(4,5);
    return 0;
}