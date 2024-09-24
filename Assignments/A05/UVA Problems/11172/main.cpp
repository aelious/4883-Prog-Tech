/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 9/24/2024
*/

#include <iostream>
#define endl "\n"
using namespace std;

int main() {
    long val1, val2, testCase;
    cin >> testCase;
    while (testCase > 0) {
        cin >> val1 >> val2;
        if (val1 > val2) {
            cout << ">" << endl;
        } else if (val1 < val2) {
            cout << "<" << endl;
        } else {
            cout << "=" << endl;
        }
        testCase--;
    }
    return 0;
}