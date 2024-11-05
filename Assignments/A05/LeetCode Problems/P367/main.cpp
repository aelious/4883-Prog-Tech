/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 11/5/2024
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        int mid;
        // Account for edge cases:
        if (num == 0 || num == 1) {
            return true;
        } else if (num == 2 || num == 3) {
            return false;
        }
        // if odd we want our mid to be one above to account for fractions
        if (num % 2 == 1) {
            mid = (num/2)+1;
        } else {
            mid = num / 2;
        }
        // Compute sqrt, taking account for fraction drops
        for (int i = 2; i <= mid; i++) {
            if (double(num)/i == double(i)) {
                cout << i << "*" << i << " = " << num << endl;
                return true;
            } else if (num/(i+1) < i) {
                cout << num << "/" << i+1 << " < " << i << endl;
                return false;
            }
        }
        // default fail safe
        return false;
        }
};