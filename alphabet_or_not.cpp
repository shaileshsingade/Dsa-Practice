#include<iostream>
using namespace std;
int main(){
char ch;
cout << "Enter an alphabet :";
cin >> ch;
if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
{
    cout << "is an alphabet !";
}
else
{
    cout << " is not an Alphabet";
}
return 0;
}
