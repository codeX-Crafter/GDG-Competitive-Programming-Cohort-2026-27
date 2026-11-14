#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "abcd";
    int n = s.size();
    for (int i=0; i<n; i++){
        string x = "";
        for (int j=i; j<n; j++){
            x += s[j];
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}

// Time : O(n^2)