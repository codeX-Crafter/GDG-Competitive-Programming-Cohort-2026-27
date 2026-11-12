#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {2,3,5,7,9};
    // method 1: time : O(n), space : O(n)
    vector<int> v2;                                 // extra space of size n
    for (int i=v.size()-1; i>=0; i--){              // n iterations
        v2.push_back(v[i]);
    }
    for (int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;

    // method 2: time : O(n), space : O(1)
    for (int i=0; i<v.size()/2; i++){               // n/2 iterations
        swap(v[i], v[v.size()-1-i]);                // in-place swaps; changing the original array
    }
    for (int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}