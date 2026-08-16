// #include <iostream>
// #include <vector>
// using namespace std;

// int main(){
//     vector<int> vec;

//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);


//     cout << "after push back size : " << vec.size() << endl;

//     vec.pop_back(); //45

//     cout << vec.back() << endl;
//     return 0;
// }

// #include <iostream>
// #include<vector>

// using namespace std;

// int main() {
//     vector<int> vec;

//     vec.push_back(25);
//     vec.push_back(35);
//     vec.push_back(45);

//     cout << "after push back size : " << vec.size() << endl;

//     vec.pop_back();

//     cout << vec.at(1) << endl;

//     return 0;
// }

// #include <iostream>
// #include<vector>
// using namespace std;

// int main() {
//     vector<int> vec;

//     vec.push_back(0);
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);
//     vec.push_back(4);
    
//     cout << vec.size() << endl;
//     cout << vec.capacity()<< endl;
//     return 0;
// }

#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int> arr, int key) {
    for(int i=0; i<arr.size(); i++) {
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {10, 20, 30, 40, 50};
    int key;
    cout << "Enter the number to search : ";
    cin >> key;

    int index = linearSearch(arr, key);
    if(index != -1){
        cout << "Element found at index : " << index;

    } else {
        cout << "Element not found.";
    }
    cout << endl;
    return 0;

}