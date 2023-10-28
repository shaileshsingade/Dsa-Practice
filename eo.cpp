#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout<<"Enter the Array element";
	for(int i = 0;i<=10;i++)
	{
		cin>>a[i];
	}
     check(a[i]);	
}
 void check(int n)
{
	if(n%2==0)
	{
		cout<< "a[i] is Even no."; 
	}
	else
	{
		cout<<"a[i] is odd no.";
	}
}

