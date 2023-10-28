#include<iostream>
using namespace std;

int intersection(int arr1[],int arr2[], int n , int m)
{
    int i = 0 , j = 0 ;
    int ans  ;
    while(i < n && j < m)
    {
        if(arr1[i]==arr2[j])
        {
            ans = arr1[i];    // 
            i++;
            j++;
        }
        else if(arr1[i]< arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    int a[3]={1,6,7};
    int b[3] ={3,6,5};

    int answer = intersection(a,b,3,3);
    cout << answer << endl ;
    return 0 ;
}