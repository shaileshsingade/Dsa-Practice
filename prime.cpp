 #include<iostream>
 using namespace std;

 int main()
 {
    int n ;
    cout << "Enter any Number" << endl ;
    cin >> n;

    bool isprime = 1 ;

    for (int i = 2 ; i < n ; i++)
    {
        if( n % i == 0)
        {
            isprime = 0 ;
            break ;
        }
    }

    if(isprime == 0)
    {
        cout << "not a Prime number" << endl ;
    }
    else{
        cout << "is prime number";


    }
}

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n ;
//     cin >> n;
// while(n != 0){
// int bit = n & 1;
// cout << bit ;
// n = n >> 1;
// }
// }