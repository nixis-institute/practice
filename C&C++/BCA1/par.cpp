#include "iostream"
//#include<conio.h>
using namespace std;
	//DIAMOND PATTERN PROGRAM
	int main()
	{
	   int value, i, j, k;
	   cout<<"PROGRAM FOR DISPLAYING DIAMOND PATTERN OF *.";
	   cout<<"\nENTER NUMBER TO PRINT THE DIAMOND:- ";
	   cin>>value;

	   //FIRST PART OF LOOP
	   for(i=1; i<=value; i++)
	   {
		for(j=0; j<=(value-i); j++)
		{
		    cout<<" ";
		}
		for(j=1; j<=i; j++)
		{
		    cout<<"*";
		}
		for(k=1; k<i; k++)
		{
		   cout<<"*";
		}
		cout<<"\n";
	   }
	   //SECOND PART OF LOOP
	   for(i=value-1; i>=1; i--)
	   {
		for(j=0; j<=(value-i); j++)
		{
		    cout<<" ";
		}
		for(j=1; j<=i; j++)
		{
		    cout<<"*";
		}
		for(k=1; k<i; k++)
		{
		   cout<<"*";
		}
		cout<<"\n";
	   }
	 }