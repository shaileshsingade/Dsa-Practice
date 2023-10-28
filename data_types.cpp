#include<iostream>

using namespace std; 
int glow = 6;
 void sum()
 {
     int a;
     cout << glow;
 }


int main()

    /*
    int a = 15 , b = 30 ;
    float pi = 3.14;
    char c = 'd';
    cout << " this is display of data types" <<endl<< "the value of a is " << a <<endl << "the value of b is " << b << endl;
    cout << "the value of pi is "<< pi << endl << " the value of c is " << c <<endl;
    return 0;*/

    //for local variables and global variables 
    // the first preference goes to local variables
    {
        int glow = 9;
        glow = 52 ;
        int  a = 15 , b = 14 ;
        sum();
        cout << glow ;
        return 0;


    }
    
