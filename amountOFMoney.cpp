#include<iostream>
using namespace std;
int main()
{
    int amount;
    cin>> amount;
    int n500, n200;
    n500=n200 = 0;
    switch (amount )
    {
    case 'n500':
        n500 = amount / 500;
        amount = amount % 500;
        break;
        case 'n200':
        n500 = amount / 200;
        amount = amount % 200;
        break;
    
    
    default:
        break;
    }
}