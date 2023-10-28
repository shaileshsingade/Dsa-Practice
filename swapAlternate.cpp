#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}

void SwapAlternate(int arr[], int size)
{
    for(int i =0;i<size;i+=2)
    {
       // if(i+1<size)
        {
        swap(arr[i],arr[i+1]);
        }
    }
}

int main()
{
    int even[8] = {2,3,2,4,5,4,5,9};

    SwapAlternate(even,8);
    printArray(even,8);
    return 0;


}