#include<iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter the month number :";
    cin >> month;
    if(month==1|| month==3||month==5|| month==7 || month==8 || month==10 || month==12)
    {
        cout << "the months of are 31 days";

    }
    else if (month == 4 || month==6 ||month== 9 || month==11)
    {
        cout << "the months are of 30 days";

    }
    else if(month==2)
    cout << "the months of 28 or 29 days";
    else
    {
        cout << " invalid statements";
    }
    return 0;
}