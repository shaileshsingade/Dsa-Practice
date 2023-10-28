#include<iostream>
using namespace std;

int pairsum(int arr[], int size)
{
    int ans = 0 ;
    int s = 7;
    for(int i = 0 ;i < size ;i++)
    {
        for(int j = i+1 ; i < size ; i++)
        {
            if(arr[i] + arr[j] == 7)
            {
                int temp ;
                temp = min(arr[i],arr[j]);
                temp = max(arr[i],arr[j]);
                ans = temp;
            }
        }
    }
    return ans;
}

int main()
{
    int a [5]={2,4,5,2,7};

    int answer = pairsum(a,5);
    cout << answer ;
}