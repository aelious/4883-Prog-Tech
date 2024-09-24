/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 9/24/2024
*/

#include <iostream>
#include <vector>
#include <numeric>
#include <iomanip>
#define endl "\n"
using namespace std;

int main() {
    long count, testCases, val;
    float temp;
    cin >> testCases;
    while (testCases > 0) {
        cin >> count;
        float average, total;
        vector<int> vals;
        while (count != 0) {
            cin >> val;
            vals.push_back(val);
            count--;
        }
        total = accumulate(vals.begin(), vals.end(), 0);
        average = total / vals.size();
        temp = 0;
        for(auto i : vals){
            if (i > average) {
                temp++;
            }
        } 
        temp /= vals.size();
        temp *= 100;
        if (count == 0) {
            cout << setprecision(3) << fixed << temp << "%" << endl;
            testCases--;
        }
    }
    return 0;
}