#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    unsigned long long int i=0,ans = 0;
    if(n<0)
    {
        n = pow(2,16)+n;
    }
    cout<<n<<endl;
    while(n!=0)
    {
        int lastbit = n&1;
        ans = (lastbit * pow (10,i))+ans;
        n = n>>1;
        i++;
       
    }
    cout<<ans <<endl;
    
}