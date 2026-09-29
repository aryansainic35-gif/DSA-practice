// #include <iostream>
// using namespace std;

// long long binaryPower(long long  x, long long n) {
//     long long ans = 1;

//     while(n > 0) {
//         if(n % 2 == 1) {
//             ans *= x;
//         }
//         x *= x;
//         n /= 2;
//     }
//     return ans;
// }
// int main() {
//     cout << binaryPower(2, 10);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// long long binaryPower(long long x, long long n) {
//     long long ans = 1;

//     while(n > 0) {
//         if(n % 2 == 1) {
//             ans *= x;
//         }
//         x *= x;
//         n /= 2;
//     }
//     return ans;

// }
// int main() {
//     cout << binaryPower(2, 31) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int majorityElements(int arr[], int n) {
//     int freq = 1;
//     int ans = arr[0];

//     for(int i=1; i<n; i++) {
//         if(arr[i] == ans) {
//             freq++;
//         }
//         else {
//             freq--;
//         }
//         if(freq == 0) {
//             ans = arr[i];
//             freq = 1;
//         }
//         freq = 0;
//         for(int i=0; i<n; i++) {
//             if(arr[i] == ans) {
//                 freq++;
//             }
//         }
//         if(freq > n/2) {
//             return ans;
//         }
//         return -1;
//     }
// }
// int main() {
//     int arr[] = {1, 2, 3, 4};
//     int n = 3;

//     cout << majorityElements(arr, n) << endl;
//     return 0;
// }