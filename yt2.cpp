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

//     int decNum = 50;

//     for(int i=1; i<=10; i++){
//         cout << decToBinary(i) << endl;
//     }
//    // cout << decToBinary(decNum) << endl;
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

