#include<iostream>
using namespace std;

int main(){
    int n,rem,rev;
    cout<<"Enter any number:";
    cin >> n;
    for(rev=0;n>0;n=n/10)
    {
        rem=n%10;
        rev = rem +(rev*10);

        cout<<"reverse number:"<<rev<<endl;
        
    }

    return 0;
}