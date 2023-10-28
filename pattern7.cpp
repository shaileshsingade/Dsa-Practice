#include<iostream>
using namespace std;
int main()
{
    int n; 
    cin>> n;
    for(int row = 1 ; row<=n ; row++)
    {
      int start=row;
      for (int column = 1; column <=row; column++)
      {
          cout<<start<<" ";
          start--;

      }     
      cout<<endl;
    }
    return 0;
}