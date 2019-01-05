#include"iostream"
using namespace std;
int main()
{
    //int i,j,k,m,n,r,sum=0;
    int i,j,k,sum=0,n=3;
    int a[3][3],b[3][3],c[3][3];
    //cout<<"enter the order of matrix"<<endl;
    //cin>>n;


    cout<<"\n enter the element of matrix a"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>a[i][j];
    }

    cout<<"\n enter the element of matrix b"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        cin>>b[i][j];
   }


   //cout<<"\n the result matrix is....."<<endl;
   for(i=0;i<n;i++)
   {        
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
                sum+=a[i][k]*b[k][j];
            c[i][j] = sum;
        }
   }
   
    cout<<"\n the result matrix is....."<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
