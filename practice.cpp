// #include <iostream>
// using namespace std;

// int sumOfArray(int arr[], int sz) {
//     int sum = 0;
//     for(int i=0; i<sz; i++) {
//         sum += arr[i];
//     }
//     return sum;
// }

// int productOfArray(int arr[], int sz) {
//     int product = 1;
//     for(int i=0; i<sz; i++) {
//         product *= arr[i];
//     } 
//     return product;
// }


// int main() {

//     int sz;
//     cout << "Enter the number of elements : ";
//     cin >> sz;


//     int arr[sz];
//     cout << "Enter the elements : ";
//     for(int i=0; i<sz; i++) {
//         cin >> arr[i];
//     }

//     cout << "Sum : " << sumOfArray(arr, sz) << endl;
//     cout << "Product : " << productOfArray(arr, sz) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swapMaxMin(int arr[], int sz) {
//     int maxIndex = 0, minIndex =0;
//     for(int i=0; i<sz; i++) {
//         if(arr[i] > arr[maxIndex]){
//             maxIndex = i;
//         }
//         if(arr[i] < arr[minIndex]) {
//             minIndex = i;
//         }
//     }
//     int temp = arr[maxIndex];
//     arr[maxIndex] = arr[minIndex];
//     arr[minIndex] = temp;
// }

// int main(){ 
//     int arr[] = {12, 45, 7, 89, 23};
//     int sz = sizeof(arr) / sizeof(arr[0]);

//     swapMaxMin(arr, sz);

//     cout << "Array after swapping max and min elements : \n";
//     for(int i=0; i<sz; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime) {
//     int painter = 1, time = 0;
//     for(int i=0; i<n; i++) {
//         if(time + arr[i] <= maxAllowedTime) {
//            time += arr[i]; 
//         } else {
//             painter++;
//             time = arr[i];
//         }
//     }
//     return painter <= m;
// }

// int minTimeToPaint(vector<int> &arr, int n, int m) {
//     int sum = 0, maxVal = INT16_MIN;
//     for(int i=0; i<n; i++) {
//         sum += arr[i];
//         maxVal = max(maxVal, arr[i]);
//     }
//     int st = maxVal, end = sum, ans = -1;
//     while(st <= end) {
//         int mid = st + (end-st)/2;

//         if(isPossible(arr, n, m, mid)) {
//             ans = mid;
//             end = mid-1;
//         } else {
//             st = mid+1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> arr = {40, 30, 10, 20};
//     int n = 4, m = 2;

//     cout << minTimeToPaint(arr, n, m) << endl;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> &arr, int n, int m, int maxAllowedTime) {
    int painter = 1, time = 0;
    for(int i=0; i<n; i++) {
        if(time + arr[i] <= maxAllowedTime) {
            time += arr[i];
        } else {
            painter++;
            time = arr[i];
        }
    }
    return painter <= m;
}

int minTimeToPaint(vector<int> &arr, int n, int m) {
    int sum = 0, maxVal = INT16_MIN;
    for(int i=0; i<n; i++) {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }
    int st = maxVal, end = sum, ans = -1;
    while(st <= end) {
        int mid = st + (end-st)/2;
        if(isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid-1;
        } else {
            st = mid+1;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {40, 30, 10, 20};
    int n = 4, m = 2;

    cout << minTimeToPaint(arr, n, m) << endl;
    return 0;
}