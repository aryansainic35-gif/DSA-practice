// #include <iostream>
// #include <vector>
// using namespace std;

// int peakMountain(vector<int> arr) {
//     int n = arr.size();
//     int st =1, end = n-2;

//     while(st <= end) {
//         int mid = st + (end-st)/2;

//         if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
//             return mid;
//         } else if(arr[mid] > arr[mid-1]) {
//             st = mid+1;
//         } else{
//             end = mid-1;
//         }
//     }
//     return -1;
// }
// int main() {
//     vector<int> arr = {1, 3, 5, 7, 9, 2, 0};

//     cout << peakMountain(arr) << endl;
//     return 0;
// }


//#include <iostream>
// #include <vector>
// using namespace std;

// int maxElement(vector<int> arr) {
//     int n = arr.size();
//     int max= arr[0];

//     for(int i=0; i<n; i++) {   //Max Element ko return kre 
//         if(arr[i] > max) {
//             max = arr[i];
//         } 
//     }
//     return max;
// }
// int main() {
//     vector<int> arr = {10, 25, 7, 40, 15};
//     cout << maxElement(arr) << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;

// int sumVector(vector<int> arr) {
//     int n = arr.size();
//     int sum = 0;

//     for(int i=0; i<n; i++) {
//         sum += arr[i];     //sum
//     }
//     return sum;
// }
// int main() {
//     vector<int> arr = {10, 20, 30, 40};

//     cout << sumVector(arr) << endl;
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;


vector<int> getEvenVector(vector<int> arr){
    

    vector<int> even;
    
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] % 2 == 0) {
            even.push_back(arr[i]);
        }
    }
    return even;
}
int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    vector<int> result = getEvenVector(arr);

    for(int i=0; i<result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}