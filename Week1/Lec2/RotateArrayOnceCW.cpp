#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v = {3,4,2,1,5};
    int n = v.size();
    int x = v[n-1];
    for (int i=n-1; i>0; i--){
        v[i] = v[i-1];
    }
    v[0] = x;

    for (int i=0; i<n; i++) {
        cout << v[i] << " ";
    }
    return 0;
}

// time : O(n)
// space : O(1)