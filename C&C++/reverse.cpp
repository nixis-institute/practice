#include "iostream"
using namespace std;
int main()
{
    int number,r;
    cout<<"Enter number ";
    cin>>number;
    while(number)
    {
        r = number%10;
        cout<<r;
        number = number / 10;
    }
}