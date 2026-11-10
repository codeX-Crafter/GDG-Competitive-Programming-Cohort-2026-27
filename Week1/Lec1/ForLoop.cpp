#include <iostream>
using namespace std;

int main(){
    for (int i=1; i<=5; i++){       // (Initialization; Condition; Updation)
        if (i==3) {
            // break;               
            continue;
        }
        cout << i << endl;
    }
    return 0;
}