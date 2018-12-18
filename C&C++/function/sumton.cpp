#include "iostream"
using namespace std;
int sum(int a)
{
	int i,s=0;
	for(i=1;i<=a;i++)
	{
		s = s+i;
	}
	return s;
}

int main()
{
	int val,result;
	cout<<"Enter the value ";
	cin>>val;
	result = sum(val);
	cout<<"sum is "<<result;
}