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
    long B, A, testCases, curr = 0;
    cin >> testCases;
    while (curr < testCases) {
        cin >> A >> B;
        long count = 0;
        if (A % 2 == 0) {
            A++;
        }
        if (B % 2 == 0) {
            B--;
        }
        for(int i = A; i <= B; i+=2){
            count += i;
        }
        cout << "Case " << curr+1 << ": " << count << endl;
        curr++;
    }
    return 0;
}