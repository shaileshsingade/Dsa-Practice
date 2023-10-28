#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n >>= 1; // Right shift to check the next bit
    }
    return count;
}

int main() {
    int a, b;
    cout << "Enter two integers a and b: ";
    cin >> a >> b;

    int result = countSetBits(a );
    int shailesh = countSetBits(b );
    int ans = result + shailesh ;

    cout << "Total number of set bits in a & b: " << ans << endl;

    return 0;
}
