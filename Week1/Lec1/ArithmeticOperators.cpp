#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10;
    // Addition
    cout << a + b << endl << endl;

    // Subtraction
    cout << a - b << endl << endl;
    
    // Multiplication
    cout << a * b << endl << endl;
    
    // Integer Division
    cout << a / b << endl;                      // 5/10 gives 0
    cout << b / a << endl;
    cout << 5/3 << endl << endl;                // will give 1

    // Float Division
    cout << (float)a / b << endl;               // 5.0/10 gives 0.5
    cout << 5.0/3.0 << endl << endl;            // will give 1.66667

    // Modulo --> gives the remainder after division
    cout << a % b << endl;
    cout << b % a << endl;
    cout << 5 % 3 << endl;
    return 0;
}