// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int* ptr = &a;  // address store kre ga a ka

//     cout << ptr << endl;
//     cout << &a << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     float price = 100.81; // jis type ka variable hoga ussi type a ptr bi hoga
//     float* ptr = &price;

//     cout << &price << endl;
//     cout << &ptr << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int* ptr1 = &a;

//     int** ptr2 = &ptr1;
    
//     cout << &a << endl;
//     cout << &ptr1 << endl;
//     cout << ptr2 << endl;

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int* ptr = &a;

//     int** parPtr = &ptr;

//     cout << *(parPtr) << endl; // * -> Dereference operator
//     cout << **(parPtr) << endl;
//     return 0;

// }


// #include <iostream>
// using namespace std;

// int main() {
//     int a = 5;
//     int* p = &a;
//     int** q = &p;

//     cout << *p << endl;
//     cout << **q << endl;
//     cout << &a << endl;
//     cout << p << endl;
//     cout << *q << endl;
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     int a = 10;
//     int* ptr = &a;

//     cout << ptr << endl;
//     //ptr++;
//     ptr--;
//     cout << ptr << endl; // iss me +4 byte hogi na ki +1
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};

//     cout << *arr << endl; //1
//     cout << *(arr+1) << endl; //2
//     cout << *(arr+2) << endl; //3
//     cout << *(arr+3) << endl; //4
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40};
    int* ptr = arr;

    
    cout << *(ptr+1) << endl;
    cout << *(ptr+3) << endl;
    ptr++;
    cout << *ptr << endl; 
    return 0;
}