#include "iostream"
using namespace std;
int main()
{
    float a = 4.598;
    float *b,*c,*d;
    b = &a;
    c = b;
    cout<<a<<","<<*(&a)<<","<<*b<<", "<<b<<"\n";
    return 0;

    
}
