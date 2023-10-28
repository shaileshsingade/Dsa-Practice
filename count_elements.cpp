#include<iostream>
using namespace std;

int main()
{
    // int size;
    // cin >>size;
    int arr[100] = {2,3,3,2,6,4,7,3,54,2};

    int count = 0 ;
    for(int i = 0 ; i <10 ; i++)
    {
        if(arr[i]==2)
        {
            count++;
        }
    }
    cout<< count ;
}