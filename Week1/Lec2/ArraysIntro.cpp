#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    // declaration
    int arr[n];
    
    // input 
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    // output
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}