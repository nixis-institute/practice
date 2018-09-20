 #include "iostream"
 using namespace std;
 int main()
 {
     int e,w,s,n;
     char a;
     cout<<"enter your direction ";
     cin>>a;
     if(a=='W' || a=='w')
     {
     cout<<"west\n";
     }
     else if(a=='S' || a=='s')
     {
     cout<<"south\n";
     }
     else if(a=='N' || a=='n')
    {
    cout<<"north\n";
     }
     else if(a=='E' || a=='e')
     {
     cout<<"east\n";
     }
     else
     {
     cout<<"wrong direction";
     }
     return 0;
 }