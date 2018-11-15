# include "iostream"
using namespace std;
int main()
{
    int i,k;
    char j;
    cout<<"enter a value";
    cin>>k;
    for(i=65;i<=65+k;i++)
        {
      for(j=65;j<=i;j++)
                    cout<<" "<<j;
                       cout<<" \n ";
            if(j>=91)
            break;           
    }
}