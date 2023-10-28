#include<iostream>
#include<math.h>
#include <limits.h>
using namespace std;

int getmax (int arr[],int size)
{
    int maxi = INT_MIN;
    for (int i = 0 ; i < size ; i++)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }
    return maxi;


}
int getmin (int arr[],int size)
{
    int mini = INT_MAX;
    for (int i = 0 ; i < size ; i++)
    {
        if(arr[i] < mini)
        {
            mini = arr[i];
        }
    }
    return mini;


}

int main()
{
    int arr[100];
    int size;
    cin >> size;
    for(int i =0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

    int ans = getmax (arr,size);
    int answer = getmin ( arr, size);
    cout << ans << endl;
    cout << answer;
}