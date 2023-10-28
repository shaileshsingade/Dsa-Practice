#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout << "Enter any three number" << endl;
    cin >> a >> b >> c;
    if(a>b && a>c )
    {
        cout << a << " largest " << endl;
    }
    else if(b>a && b>c)
    {
        cout << b << " largest" << endl;
    }
    else
    {
        cout << c << " largest" << endl;
    }
    return 0;

}
