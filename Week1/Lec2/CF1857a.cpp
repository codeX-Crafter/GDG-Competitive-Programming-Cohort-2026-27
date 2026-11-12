#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i=0; i<n; i++) cin >> a[i];
        int s = 0;
        for (int i=0; i<n; i++) s += a[i];
        if (s%2 == 1) cout << "NO";         // s is odd
        else cout << "YES";                 // s is even
        cout << endl;
    }
    return 0;
}