#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a =1;
    for (int i =1;i<=n ;i++)
    {
        for (int j = 1; j <=n; j++)
        {
            
           // cout<<j; for j
            //a= n-j+1; for reverse j; 

            cout<<a <<" ";
            a++;
        }
        cout<<endl;
        
    }
}

