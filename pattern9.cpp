#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char value = 'A';
    for (int i = 1; i <=n; i++)
    {
        for(int k =1 ; k<=n; k++)
        {
            cout<< value<< " ";
            value++;
        }
        cout<<endl;
    }
    
}