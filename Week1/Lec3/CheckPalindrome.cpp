#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s = "Naman";

    // Method 1, time : O(n), space : O(n)
    // string s2 = s;
    // reverse(s2.begin(), s2.end());
    // bool f = 1;
    // for (int i=0; i<s.size(); i++){
    //     if (s[i] != s2[i]){
    //         f = 0;
    //         break;
    //     }
    // }
    // if (s == s2) {
    //     cout << "Palindrome";
    // } else {
    //     cout << "Not a palindrome";
    // }

    // Method 2, time : O(n), space : O(1)
    bool f = 1;
    int i = 0, j = s.size()-1;
    while (i < j){                  // n/2 iterations
        if (s[i] != s[j]){
            f = 0;
            break;
        }
        i++;
        j--;
    }
    if (!f) {
        cout << "Not a palindrome";
    } else {
        cout << "palindrome";
    }
    return 0;
}