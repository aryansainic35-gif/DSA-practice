// # include <iostream>
// using namespace std;

// //function definition
// void printHello(){
//     cout <<"hello\n";
// }

// int main(){
//     //function call / invoke
//     printHello();
//     return 0;

// }


// #include <iostream>
// using namespace std;

// // sum of 2 no.
// double sum(double a,double b){
//     double s = a + b;
//     return s;
//              // doo value ka sum return krta hai
// }
// // min. of 2 no.
// int minOfTwo(int a, int b){  // int a, int b these are parameters
//     if(a < b) {
//         return a;
//     } else{
//         return b;
//     }
// }

// int main(){
//     cout << "min : " << minOfTwo(5, 3) << endl;  // 5, 3 these are arguments

//     return 0;
// }

// # include <iostream>
// using namespace std;

// int main(){
//     int N = 5;
//     int sum = 0;
//     for( int i=1; i<=N; i++){
//         sum += i;
        
//     }
//      cout << "Sum : " << sum << endl;
//      return 0;
// }
                 // OR

// # include <iostream>
// using namespace std;

// int sumN(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum += i;
//     }
//     return sum;
// }
// int main(){
//     cout << sumN(5) << endl;
//     cout << sumN(10) << endl;
//     return 0;
// }


// # include <iostream>
// using namespace std;

// int facN(int n){
//     int fact = 1;

//     for(int i=1; i<=n; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int main(){
//     cout << facN(4) << endl;
//     cout << facN(10) << endl;

//     return 0;
// }


// # include <iostream>
// using namespace std;

// void changeX(int x) {
//     x = 2*x;
//     cout << "x : " << x << endl;
// }

// int main(){
//     int x = 5;
//     changeX(x);

//     cout << "x : " << x << endl;

//     return 0;
// }


// # include <iostream>
// using namespace std;

// int sumOfDigits(int num) {       // sum of digits of a no.
//     int digSum = 0;

//     while(num > 0) {
//         int lastDig = num % 10;
//         num /= 10;
//         digSum += lastDig;
//     }
//     return digSum;
// }

// int main(){
//     cout << "sum : " << sumOfDigits(2356) << endl;

//     return 0;
// }


// # include <iostream>
// using namespace std;

// int factorial(int n) {
//     int fact = 1;

//     for(int i=1; i<=n; i++) {  // binomial coefficient for n&r
//         fact *= i;
//     }
//     return fact;
// }

// int nCr(int n, int r){
//     int fact_n = factorial(n);
//     int fact_r = factorial(r);
//     int fact_nmr = factorial(n-r);

//     return fact_n / (fact_r * fact_nmr);

// }

// int main(){
//     int n = 6, r = 3;
//     cout << nCr(n, r) << endl;


//     return 0;

// }

// # include <iostream>
// using namespace std;

// bool isPrime(int n) {
//     if(n <= 1){
//         return false;
//     }
//     for(int i=2; i*i<=n; i++){
//         if(n%i == 0)
//         return false;
//     }
//     return true;
    
// }

// int main(){
//     int num;
//     cout <<"Enter a number : ";
//     cin >> num;

//     if(isPrime(num)){
//         cout << num << " is a prime number.";
//     } else{
//         cout << num << " is not a prime number.";
//     }

//     return 0;
// }
