/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 9/24/2024
*/

#include <iostream>
#include <fstream>
#define endl "\n"
using namespace std;

int main() {
    long val, testCase = 1;
    cin >> val;
    while (val > 0) {
        long pastes = 1, count = 0;
        while (pastes < val) {
            pastes *= 2;
            count++;
        }
        cout << "Case " << testCase << ": " << count << endl;
        testCase++;
        cin >> val;
    }
    return 0;
}