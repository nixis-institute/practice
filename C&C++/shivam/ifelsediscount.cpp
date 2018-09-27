#include"iostream"
using namespace std;
int main()
{
    int a,c;
    cout<<"enter a pay amount";
    cin>>a;

    if (c<20000){
    c=a*8/100;
      cout<<"the final price is "<<a-c;
    }
    else{
        c=a*10/100;
        cout<<"final price"<<a-c;
    }
    return 0;
    }

