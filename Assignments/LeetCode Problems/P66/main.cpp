class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1] += 1;
        for(int i = 1; i < digits.size() + 1; i++) {
            if(digits[digits.size() - i] == 10 && i != digits.size()) {
                digits[digits.size() - i] = 0;
                digits[digits.size() - i - 1] += 1;
            }
            if(digits[digits.size() - i] == 10 && i == digits.size()) {
                digits[digits.size() - i] = 0;
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
    }
};