#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    int i = 0, j = n-1;
    int s = 0, d = 0;
    bool f = 1;             // f = 1 --> sereja's turn; f = 0 --> dima's turn
    while (i <= j){
        if (v[i] > v[j]){
            if (f) s += v[i];
            else d += v[i];
            f = !f;         // 1 --> 0; 0 --> 1
            i++;
        } else {
            if (f) s += v[j];
            else d += v[j];
            f = !f;
            j--;
        }
    }
    cout << s << " " << d << endl;
    return 0;
}