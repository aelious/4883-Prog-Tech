/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 11/5/2024
*/

class Solution {
public:
    int reverse(int x) {
        int temp;
        long long ans = 0;
        if (x > 2147483647 || x < -2147483648){
            return 0;
        }
        while (x) {
            temp = x%10;
            x /= 10;
            ans *= 10;
            ans += temp;
            if (ans > 2147483647 || ans < -2147483648) {
                return 0;
            }
        }
        return ans;
    }
};