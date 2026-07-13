// # include <iostream>
// using namespace std;

// int main(){
//     int size = 5;
//     int marks[size];
    
//     for(int i=0; i<size; i++) {
//         cin >> marks[i];
//     }

//     for(int i=0; i<size; i++) {
//         cout << marks[i] << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;

//     int smallest = INT32_MAX;

//     for(int i=0; i<size; i++) {
//         if(nums[i] < smallest) {
//             smallest = nums[i];
//         }
//     }
//     cout << "smallest : " << smallest << endl;

//     return 0;
// }            

// #include <iostream>      SAME AS ABOVE
// using namespace std;

// int main() {
//     int nums[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;

//     int smallest =INT16_MAX; // INT16_MAX means jab smallest kisi no.
//                              // se compare ho to vo hi jite so INT16_MAX means +infinity
//     for(int i=0; i<size; i++) {
//         smallest = min(nums[i], smallest);
//     }

//     cout << "Smallest : " << smallest << endl;
//     return 0;
// }


//#include <iostream>
// using namespace std;

// int main(){
//     int nums[] = {5, 15, 22, 1, -15, 24};
//     int size = 6;

//     int largest = INT16_MIN;

//     for(int i=0; i<size; i++) {
//         largest = max(nums[i], largest);
//     }

//     cout << "Largest : " << largest << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void changeArr(int arr[], int size) {
//     cout << "in function\n";
//     for(int i=0; i<size; i++) {
//         arr[i] = 2*arr[i];
//     }
// }

// int main(){
//     int arr[] = {1, 2, 3};

//     changeArr(arr, 3);

//     cout << "in main\n";
//     for(int i=0; i<3; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int sz, int target) {
//     for(int i=0; i<sz; i++) {
//         if(arr[i] == target) {
//             return i;  //FOUND
//         }
//     }
//     return -1;  //NOT FOUND

// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;
//     int target = 8;

//     cout << linearSearch(arr, sz, target) << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int sz) {
//     int start = 0, end = sz-1;

//     while(start < end) {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// int main() {
//     int arr[] = {4, 2, 7, 8, 1, 2, 5};
//     int sz = 7;

//     reverseArray(arr, sz);

//     for(int i=0; i<sz; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }