/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 11/5/2024
*/

class Solution {
public:
    int mySqrt(int x) {
        // Account for edge cases:
        if (x == 0 || x == 1) {
            return x;
        } else if (x == 2 || x == 3) {
            return 1;
        }
        // Compute sqrt
        for (int i = 2; i <= x/2; i++) {
            if ((x/i) == i) {
                return i;
            } else if (x/(i+1) < i) {
                return i - 1;
            }
        }
        // Return x as failsafe
        return x;
    }
};