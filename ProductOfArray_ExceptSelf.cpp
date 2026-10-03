// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4};
//     int n = arr.size();

//     vector<int> ans(n);

//     for(int i=0; i<n; i++) {
//         int prod = 1;

//         for(int j=0; j<n; j++) {  // their TC is O(n) but SC is O(n^2)
//             if(i != j) {
//                 prod *= arr[j];
//             }
//         }
//         ans[i] = prod;
//     }
//     cout << "Product array : ";
//     for(int i=0; i<n; i++) {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     vector<int> arr = {1, 2, 3, 4};
//     int n = arr.size();

//     vector<int> ans(n, 1);

//     //prefix
//     int prefix = 1;     // same problem in O(1) SC ans TC is O(n)
//     for(int i=0; i<n; i++) {
//         ans[i] = prefix;
//         prefix *= arr[i];
//     }
//     int suffix = 1;
//     for(int i=n-1; i>=0; i--) {
//         ans[i] *= suffix;
//         suffix *= arr[i];
//     }
//     cout << "Product Array : ";
//     for(int i=0; i<n; i++) {
//         cout << ans[i] << " ";
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {-1, 2, -3, 4};
    int n = arr.size();

    vector<int> ans(n, 1);

    int prefix = 1;
    for(int i=0; i<n; i++) {
        ans[i] = prefix;
        prefix *= arr[i];
    }
    int suffix = 1;
    for(int i=n-1; i>=0; i--) {
        ans[i] *= suffix;
        suffix *= arr[i];
    }
    cout << "Product Array : ";
    for(int i=0; i<n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}