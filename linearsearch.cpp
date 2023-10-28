

#include<iostream>
using namespace std;

bool search(int arr[],int size ,int key)
{
    for(int i =0 ; i < size ; i++)
    {
        if(arr[i] == key)
        {
            return 1;
        }

        // return 0;
    }
    return 0;
}



int main()
{
    int arr[100];
    int size;
    cin >> size;
    int key ;
    cin >> key ;
    for(int i =0 ; i < size ; i++)
    {
        cin >> arr[i];
    }

    bool found = search(arr ,size ,key);

    if(found)
    {
        cout << "Element is Present";
    }
    else{
        cout << "Element is not present";
    }
    return 0;
}