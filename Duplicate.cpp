#include<iostream>
using namespace std;

int duplicate(int a[],int size)
{
    int ans = 0 ;
    for(int i = 0 ; i < size ; i++)
    {
        ans =  ans^a[i];
    }
    for(int i =1 ; i < size; i++)
    {
        ans = ans ^i ;
    }
    return ans;
}

int main()
{
    int arr[9] ={4,3,5,2,5,8,7,1,6};
   int answer = duplicate(arr,9);
   cout<< answer;

}