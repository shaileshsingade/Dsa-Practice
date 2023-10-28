/*#include <iostream>
using namespace std;

int main()
{
int a = 10;
int n;
cout << "Enter any number";
cin >> n;

if (a>=n)
{
  cout << "a is larger than entered value by user";
  }
  cout << " next statement ";
  return 0;
  } */
  
  #include<iostream>
  using namespace std;
  int main()
  {
  	char s [20],state='p';
  	int i;
  	cout << "Enter the string :";
  	cin >> s;
  	for (i=0;s[i]!='\0';i++)
  	{
  		switch(state)
  		{
  			case 'p':
  				if(s[i]=='a')
  				state = 'q';
  				else
  				state = 'r';
  				break;
  				
  			case 'q':
			  if(s[i]=='a')
			  state ='p';
			  else
			  state ='r';
			  break;
			case 'r':
			break;  
			
		  }
	  }
	  if(state =='p')
	  cout << "string is accepted";
	  else
	  cout <<"string is rejected";
	  return 0;
  	
  	
  }
  
