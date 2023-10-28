#include<iostream>
using namespace std;
int main()
{
    char ch;
     cout << "Enter any character :";
     cin >> ch;
     if(ch >= 65 && ch <= 90)
     {
         cout << "the character ["<< ch <<"] is uppercase";
     }
     else if(ch >=97 && ch<= 122)
     {
         cout << " the character ["<< ch <<"] is lowercase ";

         
     }
     else if (ch>=48 && ch<= 57)
     {
         cout << " the character ["<< ch <<"] is digit ";

     }
     else
     {
          cout << " the character ["<< ch <<"] is special character ";

     }
     return 0;
}