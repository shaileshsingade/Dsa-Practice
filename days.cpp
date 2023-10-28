#include<iostream>
using namespace std;

int main()
{
	int arr[] = {31 , 30 ,28};
	string date;
	cin >> date;
	for(int i =3; i < date.length(); i++)
	{
		if(date[i] == 0  )
		{
		if((date[i+1]==1||date[i+1]==3 ||date[i+1]==5 ||date[i+1]==7 || date[i+1]==8))
		
		{
			cout << "31" << endl;
			break;
		}
		else if(date[i+1]==4 || date[i+1]==6 || date[i+1]==9)
		{
			cout << "30" << endl;
			break;
		}
		else if(date[i+1]==2)
		{
			cout << "28";
			break;
		}
	}
	else if(date[i] == 1)
	{
		if(date[i+1] == 0 || date[i+1] == 2)
		{
			cout << "31";
			break;
		}
		else if(date[i+1]==1)
		{
			cout << 30;
			break;
		}
	}
	
	
	}
}
