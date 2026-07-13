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

#include <iostream>
using namespace std;

void swapMaxMin(int arr[], int sz) {
    int maxIndex = 0, minIndex =0;
    for(int i=0; i<sz; i++) {
        if(arr[i] > arr[maxIndex]){
            maxIndex = i;
        }
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}

int main(){ 
    int arr[] = {12, 45, 7, 89, 23};
    int sz = sizeof(arr) / sizeof(arr[0]);

    swapMaxMin(arr, sz);

    cout << "Array after swapping max and min elements : \n";
    for(int i=0; i<sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}