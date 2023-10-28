

#include<iostream>
using namespace std;





void reverse(char name[], int n) {
    int s=0;
    int e = n-1;

    while(s<e) {
        swap(name[s++], name[e--]);
    }
}

void print(char name[],int n)
{
    for(int i = 0 ; i < n ; i++)
    {
        cout << name[i] << " ";
    }
    cout << endl;
}
int main()
{
    char name[20] = {"shailesh"};

    reverse(name,20);
    print(name ,20);
    
    return 0;
}