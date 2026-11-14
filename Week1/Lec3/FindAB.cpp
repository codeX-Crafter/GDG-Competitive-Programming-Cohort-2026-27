#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "ababbaab";
    int n = s.size();
    int ans = 0;

    // method 1, time : O(n^2), space : O(1)
    // for (int i=0; i<n; i++){
    //     if (s[i] == 'a'){
    //         for (int j=i+1; j<n; j++){
    //             if (s[j] == 'b') ans++;
    //         }
    //     }
    // }

    // method 2; time : O(n), space : O(1)
    int count_a = 0;
    for (int i=0; i<n; i++){
        if (s[i]=='a') count_a++;
        else {
            ans += count_a;
        }
    }
    cout << ans;
    return 0;
}