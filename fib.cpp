#include<iostream>
using namespace std;
int main()
{
    int a = 0 , b = 1 ;
    int n ;
    cin >> n;
    int ans ;
    if(n==0)
    return 0;
    if(n==1)
    return 1;
cout << a << " " << b <<" ";
for(int i =0; i<n-2 ;i++)
    {
        ans = a+b;
        cout << ans << " ";
        a = b ;
        b =ans;
    }
    return 0;
}    

// #include <iostream>
// using namespace std;

// // Function to generate Fibonacci numbers up to n
// void generateFibonacci(int n) {
//     long long int first = 0, second = 1, next;

//     cout << "Fibonacci Series: ";

//     for (int i = 0; i < n; i++) {
//         if (i <= 1)
//             next = i;
//         else {
//             next = first + second;
//             first = second;
//             second = next;
//         }
//         cout << next << " ";
//     }

//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter the number of Fibonacci numbers to generate: ";
//     cin >> n;

//     // Call the function to generate Fibonacci numbers
//     generateFibonacci(n);

//     return 0;
// }
