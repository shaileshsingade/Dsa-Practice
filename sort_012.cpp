#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << arr[i] << " ";

    }
    cout << endl;
}
void sort_zero_one_two(int arr[],int size)
{
    int mid = 0;
    int low =0 ;
    int high = size - 1;
    
    while(mid <= high)
    {
        if(arr[mid] == 0)
        {
            swap(arr[low++] , arr[mid++]);
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else if(arr[mid == 2])
        {
            swap(arr[mid++],arr[high--]);
        }
       
    }
}



int main()
{
    int ar[8] = { 1,2,1,0,0,1,2,0};

    sort_zero_one_two(ar,8);
    printArray(ar,8);
    return 0;
}