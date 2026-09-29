// # include <iostream>
// using namespace std;

// int decToBinary(int decNum) {
//     int ans = 0, pow = 1;

//     while(decNum > 0) {        // decimal to binary
//         int rem = decNum % 2;
//         decNum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;  // ans is binary form 
// }

// int main(){ 

//    cout << decToBinary(42) << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int binToDec(int binNum) {
//     int ans = 0, pow = 1;

//     while(binNum > 0) {
//         int rem = binNum % 10;
//         binNum /= 10;         
                                   // binary to decimal
//         ans += (rem * pow);
//         pow *= 2;

//     }
//     return ans;
// }

// int main(){

//     cout << binToDec(101010) << endl;

//     return 0;
// }

// # include <iostream>
// using namespace std;

// int binToDec(int binNum) {
//     int ans = 0, pow = 1;

//     while(binNum > 0) {
//         int rem = binNum % 10;
//         binNum /= 10;

//         ans += (rem * pow);
//         pow *= 2;
//     }
//     return ans;
// }

// int main(){

//     cout << binToDec(101010) << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int>majorityElements(int arr[], int n) {
//     int ans1 = 0;
//     int ans2 = 1;

//     int freq1 = 0;
//     int freq2 = 0;

//     for(int i=0; i<n; i++) {
//         if(arr[i] == ans1) {
//             freq1++;
//         }
//         else if(arr[i] == ans2) {
//             freq2++;
//         }
//         else if(freq1 == 0) {
//             ans1 = arr[i];
//             freq1 = 1;
//         }
//         else if(freq2 == 0) {
//             ans2 = arr[i];
//             freq2 = 1;
//         }
//         else {
//             freq1--;
//             freq2--;
//         }
//     }
//     freq1 = 0;
//     freq2 = 0;

//     for(int i=0; i<n; i++) {
//         if(arr[i] == ans1) {
//             freq1++;
//         }
//         else(arr[i] == ans2) {
//             freq2++;
//         }
//     }
//     vector<int>result;

//     if(freq1 > n/3) {
//         result.push_back(ans1);
//     }
// }