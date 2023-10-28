  
  //Na%3==Nb%2
#include <iostream>
#define max 100
using namespace std;
int main()
{
    char c[max];
    char state = 'A';
    int i;
    cout << "Enter a string:";
    cin >> c;

    for (int i = 0; i < c[i] != '\0'; i++)

    {
       switch (state)
        {
            
        case 'A':
            if (c[i] == 'a')
            {
                state = 'B';
                cout <<"character read a"<<endl;
                cout << "p0q0 --------> p1q0"<<endl;
            }
            else if (c[i] == 'b')
            {
                state = 'D';
                cout <<"character read b"<<endl;
                cout << "p0q0 --------> p0q1"<<endl;
            }
              else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }
            break;
        case 'B':
            if (c[i] == 'a')
            {
                state = 'C';
                cout <<"character read a"<<endl;
                cout << "p1q0 --------> p2q0"<<endl;
            }
            else if (c[i] == 'b')
            {
                state = 'E';
                cout <<"character read b"<<endl;
                cout << "p1q0 --------> p1q1"<<endl;
            }
             else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }
            break;
        case 'C':
            if (c[i] == 'a')
            {
                state = 'A';
                cout <<"character read a"<<endl;
                cout << "p2q0 --------> p0q0"<<endl;
            }
            else if (c[i] == 'b')
            {
                state = 'F';
                cout <<"character read b"<<endl;
                cout << "p2q0 --------> p2q1"<<endl;
            }
             else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }
            break;
        case 'D':
            if (c[i] == 'b')
            {
                state = 'A';
                cout <<"character read b"<<endl;
                cout << "p0q1 --------> p0q0"<<endl;
            }
            else if (c[i] == 'a')
            {
                state = 'E';
                cout <<"character read a"<<endl;
                cout << "p0q1 --------> p1q1"<<endl;
            } else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }

            break;
        case 'E':
            if (c[i] == 'b')
            {
                state = 'B';
                cout <<"character read b"<<endl;
                cout << "p1q1 --------> p1q0"<<endl;
            }
            else if (c[i] == 'a')
            {
                state = 'F';
                cout <<"character read a"<<endl;
                cout << "p1q1 --------> p2q1"<<endl;
            }
             else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }
            break;
        case 'F':
            if (c[i] == 'a')
            {
                state = 'D';
                cout <<"character read a"<<endl;
                cout << "p2q1 --------> p0q1"<<endl;
            }
            else if (c[i] == 'b')
            {
                state = 'C';
                cout <<"character read b"<<endl;
                cout << "p2q1 --------> p2q0"<<endl;
            }
             else
            {
                if (c[i] != 'a' && c[i] != 'b')
                    cout << "string is invalid";
                exit(0);
            }
            break;
        }
    }
    if (state == 'A' || state == 'E')
    {
        cout << "string is accepted";
    }
    else
    {
        cout << "string is rejected";
    }
    return 0;
}
