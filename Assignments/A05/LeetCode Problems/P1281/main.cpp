/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 11/5/2024
*/

class Solution {
public:
    int subtractProductAndSum(int n) {
        long long sum = 0;
        long long prod = 1;
        while (n) {
            prod *= (n%10);
            sum += (n%10);
            n /= 10;
        }
        return (prod - sum);
    }
};