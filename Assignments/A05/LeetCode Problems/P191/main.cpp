/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 10/20/2024
*/

class Solution {
public:
    int hammingWeight(int n) {
        string binary = "";
        int count = 0;
        while (n != 0) {
            if(n%2 == 0) {
                binary = "0" + binary;
            } else {
                binary = "1" + binary;
            }
            n /= 2;
        }
        for (int i = 0; i < binary.length(); i++) {
            if (binary[i] == '1'){
                count++;
            }
        }
        return count;
    }
};