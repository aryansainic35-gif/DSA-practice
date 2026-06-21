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


# include <iostream>
using namespace std;

int facN(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    cout << facN(4) << endl;
    cout << facN(10) << endl;

    return 0;
}