
#include"iostream"
using namespace std;
int main()
{
    float a,hindi,english,math,science,sst,p;


    cout<<"enter a hindi subject";
    cin>>hindi;
    cout<<"enter a english subject";
    cin>>english;
    cout<<"enter a math subject";
    cin>>math;
    cout<<"enter a sst subject";
    cin>>sst;
    cout<<"enter a science subject";
    cin>>science;

    a=hindi+english+math+science+sst;

     p=(a/500)*100;
     cout<<p<<"\n";
    
     if(p<100 && p>90)
     {
         cout<<"a1\n";
     }
     else if(p<90  && p>80)
     {
         cout<<"b1\n";
     }
     else if(p<80 && p>70)
     {
         cout<<"c1\n";
     }
     else if(p<70 && p>60)
     {
         cout<<"d1\n";
     }
     else if(p<60 && p>50)
     {
         cout<<"e1\n";
     }
     else
     {
         cout<<"invalid value";
     }  
     return 0;
     }   