#include <iostream>
#include <vector>           // header file for accessing vectors
using namespace std;

int main(){
    int n;
    cin >> n;

    // declaration
    vector<int> v(n);
    
    // input
    for (int i=0; i<n; i++) cin >> v[i];

    // output
    for (int i=0; i<n; i++) cout << v[i] << " ";
    return 0;
}