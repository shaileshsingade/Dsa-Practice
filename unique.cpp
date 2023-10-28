#include<iostream>
using namespace std;


int findunique(int arr[], int size){
 int ans = 0 ;
 for(int i = 0 ; i< size ; i++)
 {
    ans = ans^arr[i];
 }

 return ans;
}

int main()
{
    int a[7] ={4 ,3,4,3,2,1,1};

    int  answer = findunique(a,7);
    cout<< answer << endl;
    return 0;
}