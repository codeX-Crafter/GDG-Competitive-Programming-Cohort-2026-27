#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    // METHOD 1 (does 6 comparisons)
    // if (a > b && a > c) cout << a;
    // if (b > a && b > c) cout << b;
    // if (c > a && c > b) cout << c;

    // METHOD 2 (does 3 comparisons)
    if (a > b){
        if (a > c){
            cout << a;
        } else {
            cout << c;
        }
    } else {
        if (b > c){
            cout << b;
        } else {
            cout << c;
        }
    }
    return 0;
}