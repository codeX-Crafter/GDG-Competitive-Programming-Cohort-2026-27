#include <iostream>
#include <vector>
#include <algorithm>    // header file to use reverse()
using namespace std;

int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int n = v.size();
    int k = 3;
    k = k%n;            // for values where k >= n
    reverse(v.begin(), v.begin() + n - k);
    reverse(v.begin() + n - k, v.end());
    reverse(v.begin(), v.end());
    for (int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}