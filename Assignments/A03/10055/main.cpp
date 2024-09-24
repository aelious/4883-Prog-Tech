/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 9/24/2024
*/

#include <iostream>
#define endl "\n"
using namespace std;

int main() {
    long B = 0, A = 0;
    while (cin >> A >> B) {
        if(A < B) {
            cout << B - A << endl;
        } else {
            cout << A - B << endl;
        }
    }
    return 0;
}