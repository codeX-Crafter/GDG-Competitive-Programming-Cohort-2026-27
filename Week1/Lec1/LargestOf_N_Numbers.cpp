#include <iostream>
#include <climits>              // header file for INT_MIN, INT_MAX, LLONG_MIN, LLONG_MAX etc
using namespace std;

int main(){
    int n;
    cin >> n;
    int l = INT_MIN;            // Initialized with the lowest possible value that we can expect as input
    for (int i=1; i<=n; i++){
        int x;
        cin >> x;
        if (l < x){             // comparison with the input one at a time
            l = x;
        }
    }
    cout << l << endl;
    return 0;
}