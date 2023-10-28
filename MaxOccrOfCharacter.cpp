#include<iostream>
using namespace std;

char getmaxocccharacter(string s)
{
    int arr[26] ={0};
    // create an array to count the character

    for(int i =0 ; i< s.length();i++)
    {
        char ch =s[i];

        // Lowercase

        int number = 0;
        number = ch -'a';
        arr[number]++;
    }

    // find maximum occurence of cjharacter

    int maxi = -1;
    int ans = 0;
    for(int i = 0 ; i < 26 ; i++)
    {
        if(maxi < arr[i])
        {
            ans = i; 
            maxi = arr[i];
        }
    }
    return 'a' + ans ;
}

int main()
{
    string s;
    cout << "Enter the string" << endl;
    cin >> s;
    cout <<  getmaxocccharacter(s);
    return 0;
}