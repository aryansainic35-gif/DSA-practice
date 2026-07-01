// # include <iostream>
// using namespace std;
//                               // integer type
// int main(){
//     int age = 25;     // identifier
//     cout << age << endl;     // this is a int type so it take 4 bytes
//     return 0;
// }



// # include <iostream>
// using namespace std;

// int main(){
//     char grade = 'A';
//                               // character type
//     cout << grade << endl;    // it take 1 byte
//     return 0;
// }



// # include <iostream>
// using namespace std;

// int main(){
//     float PI = 3.14f;          // float type
//     cout << PI << endl;       // it take 4 bytes
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     char grade = 'A';   // ASCII value of 'A' is 65 and 'a' is 97

//     int value = grade;       // Type casting : conversion(Implicit)
//     cout << value << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     double price = 100.99;
//     int newprice =(int)price;    // Type casting : casting(Explicit)
//     cout << newprice << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     double price;
//     cout << "Enter the price : ";
//     cin >> price;                      // input in c++
//     cout <<"You entered price : " << price << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int a = 10;
//     int b = 3;
    
//     cout << "Sum = " << (a + b) << endl;
//     cout << "difference = " << (a - b) << endl;
//     cout << "product = " << (a * b) << endl;
//     cout << (5 / (double)2) << endl;
//     cout << "modulo = " << (a % b) << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
// //     cout << (3<5) << endl;  // true->1
// //     cout << (3>5) << endl;
// //     cout << (3>=3) << endl;
// //     cout << (3!=3) << endl;
//        cout <<( (3<1) || (3>5) )<< endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter a : ";
//     cin >> a;

//     cout << "Enter b : ";
//     cin >> b;

//     int sum = a + b;
//     cout << "Sum : " << sum << endl;
//     return 0;
// }


//# include <iostream>
//using namespace std;

// int main(){
//     int a, b;
//     cout << "Enter a : ";
//     cin >> a;

//     cout << "Enter b : ";
//     cin >> b;

//     cout << "Sum : " << (a+b) << endl;
//     cout << "diff : " << (a-b) << endl;
//     cout << "product : " << (a*b) << endl;
//     cout << "division : " << (a/b) << endl;
//     cout << "modulo : " << (a%b) << endl;
//     return 0;    
// }




// # include <iostream>
// using namespace std;

// int main(){
//     int age;
//     cout << "Enter the age : ";
//     cin >> age;
//     if(age >= 18){
//         cout << "you can vote" << endl;
//     } else{
//         cout << "you cannot vote" << endl;
//     }

//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter the number : ";
//     cin >> n;
//     if(n >= 0){
//         cout <<"n is positive" << endl;
//     }else{
//         cout << "n is negative" << endl;
//     }
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int n;
    
//     cout << "Enter the number n : ";
//     cin >> n;
//     if(n % 2 == 0){
//         cout <<"n is even" << endl;
//     }else{
//         cout <<"n is odd" << endl;
//     }
//     return 0;
// }



// # include <iostream>
// using namespace std;

// int main(){
//     int marks;
//     cout << "Enter the marks : ";
//     cin >> marks;
//     if(marks >= 90){
//         cout << 'A' << endl;
//     } else if(marks >= 80 && marks < 90){
//         cout <<'B' << endl;
//     } else{
//         cout <<'C' << endl;
//     }
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout <<"Enter ch : ";
//     cin >> ch;

//     if(ch >= 65 && ch <=90 ){       // Implicit type conversion
//         cout << "uppercase" << endl;
//     } else{
//         cout << "lowercase" << endl;
//     }
//     return 0;
 // }


// # include <iostream>
// using namespace std;

// int main(){
//     int n = -45;

//     cout << (n >= 0 ? "positive" : "negative") << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int n = 20;
//     int count = 1;

//     while(count <= n){
//         cout << count << " ";
//         count++;
//     }
//     cout << endl;
//     return 0;
// }



// # include <iostream>
// using namespace std;

// int main(){
//     int n = 10;

//     for(int i =1; i<=n; i = i+2){
//         cout << i << " ";
//     }
//     cout << endl;
//     return 0;
//}

// # include <iostream>
// using namespace std;

// int main(){
//     int sum = 0;
//     int n = 50;
//     for(int i=1; i<=n; i++){
//         sum += i;
//         if(i == 5){
//             break;        // break keyword
//         }

//     }
//     cout << "Sum : " << sum << endl;
//     return 0;

// }

//# include <iostream>
//using namespace std;

// int main(){
//     int n = 10;
//     int sum = 0;
//     int i = 1;
//     while(i<=n){
//         cout << "Sum : " << sum << endl;
//         i++, sum += i;
//     }
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int n = 5;
//     int evenSum = 0;

//     for(int i=1; i<=n; i++){
//         if(i%2 == 0){
//             evenSum += i;
            
//         }
//     }
//     cout <<"even sum : " << evenSum << endl;
//     return 0;

// }


// # include <iostream>
// using namespace std;

// int main(){
//     int n = 10;
//     int i = 1;
//     do{
//         cout << i << " ";
//         i++;
//     } while(i <= n);
//     cout << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int main(){
//     int n = 3;
//     bool isPrime = true;

//     for( int i=2; i<=n-1; i++){
//         if(n % i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true) {
//         cout << "prime no" << endl;
//     } else {
//         cout << "Non prime" << endl;
//     }
//     return 0;
// }



// # include <iostream>
// using namespace std;

// int main(){
//     int n = 50;
//     for(int i=1; i<=n; i++){
//         int m = 50;             // nested loop
//         for(int j=1; j<=m; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }
