#include <iostream>
using namespace std;

int main(){
    // for a given number n, output the sum of its digits
    // n = 126
    int n;
    cin >> n;
    int sum = 0;            // variable where we track our answer
    while (n > 0){
        int r = n % 10;     // to extract the last digit of the current value of n
        sum = sum + r;      
        n = n/10;           // updation     // to discard the last digit of n that we have already considered
    }
    cout << sum << endl;
    return 0;
}