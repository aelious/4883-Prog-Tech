/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 10/20/2024
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> numCount;
        int largest = nums[0];
        for (int i = 0; i < nums.size(); i++) {
            if (numCount[nums[i]] == 0) {
                numCount[nums[i]] = 1;
            } else {
                numCount[nums[i]]++;
            }
            if (largest < nums[i]) {
                largest = nums[i];
            }
        }
        for (int i = 0; i < k-1; i++) {
            numCount[largest]--;
            if (numCount[largest] == 0) {
                // quickly get to the next largest number
                while (numCount[largest] == 0){
                    largest -= 1;
                }
            }
        }
        return largest;
    }
};