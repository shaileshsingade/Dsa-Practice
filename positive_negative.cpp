#include<iostream>
using namespace std;
int main ()
{
    int num;
    string result;
    cout << "Enter any  number" << endl;
    cin >> num ;
   /* if (num >=0)
    {
        cout << num << " is positive number";
    }
    else{
        cout << num << " is negative number";
    }
    */
  result = (num >=0) ? " number is positive" : " number is negative";
  cout << result << endl;
    return 0;
}
