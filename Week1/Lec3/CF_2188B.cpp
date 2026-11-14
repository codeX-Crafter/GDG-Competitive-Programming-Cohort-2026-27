#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (n == 1) {
            cout << 1 << endl;
            continue;
        }
        int len = 0;
        int ans = 0;
        for (char x : s){               // time : O(n)
            if (x=='1') ans++;
        }
        int i = 0;
        while (i < n){                  // time : O(n)
            if (s[i]=='0'){
                if (i==0 || s[i-1] != '1') len++;
                while (i < n && s[i]=='0'){
                    len++;
                    i++; 
                }
                if (i==n || s[i] != '1') len++;
                ans += len/3;
                len = 0;
            }
            i++;
        }
        cout << ans << endl;
    }
    return 0;
}

// time : O(n), space : O(1)