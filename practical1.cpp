#include <iostream>
#define max 100
using namespace std;
int main()
{
    char c[max];
    char state = 'p';
    int i;
    cout << "Enter a string:";
    cin >> c;

    for (int i = 0; i < c[i] != '\0'; i++)

    {
        switch (state)
        {
        case 'p':
            if (c[i] == 'a')
            {
                state = 'q';
                cout << "character read a" << endl;
                cout << " 'p' -----> 'q'" << endl;
            }
            else if (c[i] == 'b')
            {
                state = 'p';
                cout << "character read b" << endl;
                cout << "'p' ------> 'p'" << endl;
            }
            else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }
            break;
        case 'q':
            if (c[i] == 'a')
            {
                state = 'p';
                cout << "character read a" << endl;
                cout << " 'q'-----> 'p'" << endl;
            }
            else if (c[i] == 'b')
            {
                state = 'q';
                cout << "character read b" << endl;
                cout << " 'q' -----> 'q'" << endl;
            }
            else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }

            break;

        default:
         cout <<"invalid state";

        
        }
    }

    if (state == 'p')
        cout << "string is accepted";
    else
        cout << " string is rejected";
    return 0;
}

// Output:
// Enter a string:abbaba
// character read a
//  'p' -----> 'q' 
// character read b
//  'q' -----> 'q' 
// character read b
//  'q' -----> 'q'
// character read a
//  'q'-----> 'p'
// character read b
// 'p' ------> 'p'
// character read a
//  'p' -----> 'q'
//  string is rejected

// Enter a string:aabbbbaa
// character read a
//  'p' -----> 'q'
// character read a
//  'q'-----> 'p'
// character read b
// 'p' ------> 'p'
// character read b
// 'p' ------> 'p'
// character read b
// 'p' ------> 'p'
// character read b
// 'p' ------> 'p'
// character read a
//  'p' -----> 'q'
// character read a
//  'q'-----> 'p'
// string is accepted

// Enter a string:aaccba
// character read a
//  'p' -----> 'q'
// character read a
//  'q'-----> 'p'
// string is invalid

