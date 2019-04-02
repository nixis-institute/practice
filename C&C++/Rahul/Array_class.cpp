#include "iostream"
using namespace std;
class center
{
    private:
    int k[10];
    public:
    void sumofarray()
    {
        int i;
        cout<<"Enter the elements of Araay:- ";
        for(i=0;i<10;i++)
        {
            cin>>k[i];
        }
    }
    void displaY()
    {
        int i;
        for(i=0;i<10;i++)
        {
            cout<<k[i];
        }
    }
};
int main()
{
    center obj1;
    obj1.sumofarray();
    obj1.displaY();
}
