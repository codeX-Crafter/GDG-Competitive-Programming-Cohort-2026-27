#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    // Most Basic Approach
    bool f = 1;
    for (int i=2; i<=n-1; i++){
        if (n%i==0){
            f = 0;
            break;
        }
    }
    if (f){
        cout << "prime" << endl;
    } else {
        cout << "not prime" << endl;
    }

    // Approach 2 --- running the loop from i=2 till square root of n (not discussed in class)
    // Approach 3 --- Sieve of Eratosthenes (not discussed in class, will be covered in future lectures)
    return 0;
}