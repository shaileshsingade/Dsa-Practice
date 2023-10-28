#include <iostream>
using namespace std;
int main()
{
    int amount;
    int n500, n200, n100, n50, n20, n10, c5, c2, c1;

    n500 = n200 = n100 = n50 = n20 = n10 = c5 = c2 = c1 = 0;
    cout << " Enter the amount";
    cin >> amount;
    if (amount >= 500)
    {
        n500 = amount / 500;
        amount = amount % 500;
    }
    if (amount >= 200)
    {
        n200 = amount / 200;
        amount = amount % 200;
    }
    if (amount >= 100)
    {
        n100 = amount / 100;
        amount = amount - (n100 * 100);     //amount =amount -(n100*100) == amount = amount % 100
    }
    if (amount >= 50)
    {
        n50 = amount / 50;
        amount = amount - (n50 * 50);
    }
    if (amount >= 20)
    {
        n20 = amount / 20;
        amount = amount - (n20 * 20);
    }
    if (amount >= 10)
    {
        n10 = amount / 10;
        amount = amount - (n10 * 10); 
    }
    if (amount >= 5)
    {
        c5 = amount / 5;
        amount = amount - (c5 * 5);
    }
    if (amount >= 2)
    {
        c2 = amount / 2;
        amount = amount - (c2 * 2);
    }
    if (amount >= 1)
    {
        c1 = amount / 1;
        amount = amount - (c1 * 1);
    }
    else
    {
        cout << " invalid cost";
    }
    cout << " 500=" << n500 << endl;
    cout << " 200=" << n200 << endl;
    cout << " 100=" << n100 << endl;
    cout << " 50=" << n50 << endl;
    cout << " 20=" << n20 << endl;
    cout << " 10=" << n10 << endl;
    cout << " 5=" << c5 << endl;
    cout << " 2=" << c2 << endl;
    cout << " 1=" << c1 << endl;
    return 0;
}/*
{
    int amount,i,notes;
    int a[9]={500,200,100,50,20,10,5,2,1};
    cout << "enter an amount : ";
    cin >> amount;
    for(i=0;i<9;i++)
    {
        cout << a[i] << " notes =" <<amount /a[i] << endl;
    
        amount = amount % a[i];
    }
    return 0;
} */


