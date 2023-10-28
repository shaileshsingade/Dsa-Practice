#include<iostream>
using namespace std;
 main()
 {
     char c;
     cout << "enter an alphabet :\n";
     cin >> c;
     if (
        c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u'|| c == 'A' || c == 'E' || c == 'I' || c == 'O' || c  == 'U'
     )
    {
         cout << "alphabet is vovel !";
    }
    else
    {
        cout << " Alphabet is consonant !";
    }
    return 0;

 }