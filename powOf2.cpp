// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int ans = 1;

//     for(int i = 0; i<=30; i++)
//     {
//        if(ans == n)
//        {
//            cout<<"true"<<endl;
//        }
//        if(ans< INT_MAX/2)
//        {
//            ans = ans * 2;
//        }
//     }
//     cout<<"false"<<endl;
    
// }
// #include <iostream>
//  using namespace std;
//  int main()
//  {
//    int ar[10];
//    fill_n(ar,10,1);
//    for (int i = 0; i <= 10; i++)
//    {
//      cout << ar[i] << endl;
//    }
//   }

// #include <iostream>
// #include <vector>

// bool isUnique(const std::vector<int>& arr, int element, int currentIndex) {
//     for (int i = 0; i < arr.size(); i++) {
//         if (i != currentIndex && arr[i] == element) {
//             return false;
//         }
//     }
//     return true;
// }

// void findUniqueElements(const std::vector<int>& arr) {
//     for (int i = 0; i < arr.size(); i++) {
//         if (isUnique(arr, arr[i], i)) {
//             std::cout << arr[i] << " is a unique element." << std::endl;
//         }
//     }
// }

// int main() {
//     std::vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
//     findUniqueElements(arr);
//     return 0;
// }

#include <iostream>
#include <vector>

void findUniqueElements(const std::vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        int count = 0;
        
        // Check the count of the current element in the array
        for (int j = 0; j < arr.size(); j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }

        // If the count is 1, it's a unique element
        if (count == 1) {
            std::cout << arr[i] << " is a unique element." << std::endl;
        }
        if (count == 2) {
            std::cout << arr[i] << " double element." << std::endl;
        }
    }
}

int main() {
    std::vector<int> arr = {1, 2, 2, 3, 4, 4, 4, 5, 5};
    findUniqueElements(arr);
    return 0;
}


