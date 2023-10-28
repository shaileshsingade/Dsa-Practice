#include<iostream>
using namespace std;
 
 int Getlength(char arr[])
 {
    int count = 0;
    for(int i = 0 ; arr[i] !='\0';i++)
    {
        count++;
    }
    return count;
 }

 int main()
 {
    char a [25];

    cout << "Enter your name :" << endl;
    cin >> a;
    cout <<"The Length is " << Getlength(a);

 }