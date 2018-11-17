#include "iostream"
using namespace std;
void greatervalue(int a,int b)
{
	if(a>b)
	{
		cout<<"a is greater";
	}
	else if(a<b){
		cout<<"b is greater";
	}
	else{
		cout<"both are equal";
	}
}

int main()
{
	int a,b;
	cout<"Enter the first number ";
	cin>>a;
	cout<"Enter the second number ";
	cin>>b;
	greatervalue(a,b);
}