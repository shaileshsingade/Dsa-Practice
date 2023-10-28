#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

 
int main()
{
    int a, b , temp = 0;
    cout <<"Enr=ter the first value:";
    cin >> a;
    cout << "Enter the second value:";
    cin >> b;
    cout << "before swapping ......." << endl;

     cout << "a ="<< a << " b =" << b << endl;
     temp = a;
     a = b ;
     b = temp ;
     cout << " After Swapping .............." << endl;
     cout << "a =" << a << " b =" << b << endl;
     return 0; 
}
    