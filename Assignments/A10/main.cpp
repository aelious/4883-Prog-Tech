/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 11/5/2024
*/

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // skips doing the work if the answer is already provided
        if (k == points.size()){
            return points;
        }
        // priority queue generally starts with the larger values, but using the greater<> comparison function in our
        // declaration, we can sort from smallest to largest.
        priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, greater<>> minHeap;
        vector<vector<int>> closestPoints;
        for (const auto& point : points) {
            double distance = sqrt(pow(point[0], 2) + pow(point[1], 2));
            minHeap.push({distance, point});
        }
        for (int i = 0; i < k; ++i) {
            // since our priority queue stores its smallest values first we can reliably ensure that popping will
            // provide the smallest value. we push the point to our returned vector.
            closestPoints.push_back(minHeap.top().second);
            minHeap.pop();
        }

        return closestPoints;
    }
};