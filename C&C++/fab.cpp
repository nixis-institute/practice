#include "iostream"
using namespace std;
int main()
{
    int i,prev,next,current;
    prev = 0;
    current = 1;
    cout<<"0 1"<<" ";
    for(i=0;i<20;i++)
    {
        next = current+prev;
        cout<<next<<" ";
        prev = current;
        current = next;
    }

}