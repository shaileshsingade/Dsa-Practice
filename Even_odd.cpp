#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
    int num, even ,odd;
    cout << " Enter any number:";
    cin >> num;
    if(num %2 == 0)
    {
      cout << " the given number is even !";
    }
    else 
    {
        cout << " number is odd !";

    }
    return 0;
}
