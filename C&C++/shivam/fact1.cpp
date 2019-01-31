#include "iostream"
using namespace std;
float fact(int f)
{
   
}
float main()
{
    float i,v,c=0;
    
    cout<<"enter a value";
    cin>>v;
    
    /*for(i=0;i<v;i++)
    {
        c=c+i;
    }
*/

    //cout<<c;
    for(i=0;i<v;i++)
    {
        c=c+(i/fact(i));
    }
    cout<<c;
}