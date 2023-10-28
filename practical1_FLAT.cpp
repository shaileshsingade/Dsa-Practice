#include<iostream>
using namespace std;
int main()
{
	char s[20];
	char  state='p';
	cout << "Enter a string";
	cin >> s;
	for(int i=0;i<s.length;i++)
	{
		if(state='p')
		{
		   if(s[i]=='a' && s[i]%2==0 )
		   cout << p;
		   else if(s[i]==b)
		   cout << q;
		   else
		   cout << "empty";
		}
		else
		{
			if(s[i]=='q')
			{
			if(s[i]=='a' && s[i]%2==o)
			cout << q;
			else if(s[i]=='b')
			cout <<p;
			
			else
			cout << r;
			}
		}
	}
	if(state =='p')
	cout << "accepted";
	else
	cout << "rejected";
	return 0;
}
