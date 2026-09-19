// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();
//     for(int i=0; i<n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(nums[i] + nums[j] == target) {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;

//             }

//         }
//     }
//     return ans;

// }

// int main() {
//     vector<int> nums = {2, 7, 11, 15};
//     int target = 9;

//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << ", " << ans[1] << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> nums, int target) {
//     vector<int> ans;
//     int n = nums.size();

//     int i = 0, j = n-1;
//     while(i < j) {
//         int pairSum = nums[i] + nums[j];
//         if(pairSum > target) {
//             j--;
//         } else if(pairSum < target) {
//                 i++;
//             } else {
//                 ans.push_back(i);
//                 ans.push_back(j);
//                 return ans;
//             }
//         }
//         return ans;
//     }


// int main() {
//     vector<int> nums = {2, 13, 5, 15};
//     int target = 13;

//     vector<int> ans = pairSum(nums, target);
//     cout << ans[0] << ", " << ans[1] << endl;

//     return 0;

// }

// #include <iostream>
// #include<algorithm>
// using namespace std;

// int majorityElement(int arr[], int n) {
//     sort(arr, arr + n);
//     int freq = 1;
//     int ans = arr[0];

//     for(int i=1; i<n; i++) {
//         if(arr[i] == arr[i-1]) {
//             freq++;
//         } else {
//             freq = 1, ans = arr[i];
//         }
//         return ans;
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {3, 3, 4, 2, 3, 3, 3};
//     int n = 7;

//     cout << majorityElement(arr, n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int majorityElement(int arr[], int n) {
//     int freq = 1;
//     int ans = arr[0];

//     for(int i=1; i<n; i++) {
//         if(ans == arr[i]) {
//             freq++;
//         } else {
//             freq--;
//         }
//         if(freq == 0) {
//             ans = arr[i];
//             freq =1;
//         }
//     }
//     // verify
//     freq = 0;

//     for(int i=0; i<n; i++) {
//         if(arr[i] == ans) {
//             freq++;
//         }
//     }
//     //check majority
//     if(freq > n/2) {
//         return ans;
//     }

//     return -1;
// }

// int main() {

//     int arr[] = {1, 2, 3, 4};
//     int n = 4;

//     cout << majorityElement(arr, n) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int majorityElements(int arr[], int n) {
    int freq = 1;
    int ans = arr[0];

    for(int i=1; i<n; i++) {
        if(ans == arr[i]) {
            freq++;
        } else {
            freq--;
        }
        if(freq == 0) {
            ans = arr[i];
            freq = 1;
        }
    }
    freq = 0;

    for(int i=0; i<n; i++) {
        if(arr[i] == ans) {
            freq++;
        }
    }
    if(freq > n/2) {
        return ans;
    }
    return -1;
}

int main() {

    int arr[] = {-1, -1, 2, -1, 3, -1, -1};
    int n = 7;

    cout << majorityElements(arr, n) << endl;
    return 0;
}