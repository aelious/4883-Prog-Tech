/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 11/5/2024
*/

class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>> adj(n); // adjacency list to store paths
        vector<int> answer(n, 0); // fill a vector with n 0's
        for (const auto& path : paths) { // fill adjacency list with paths and neighbors
            int x = path[0] - 1; // reduce by 1 to get proper indexes
            int y = path[1] - 1;
            adj[x].push_back(y); 
            adj[y].push_back(x);
        }
        for (int i = 0; i < n; ++i) {
            unordered_set<int> usedColors;
            for (int neighbor : adj[i]) { // look at neighbors
                if (answer[neighbor] != 0) { // 0 means neighbor isn't initialized yet
                    usedColors.insert(answer[neighbor]); // if neighbor is initialized, add its color to used colors
                }
            }
            
            for (int flower = 1; flower <= 4; flower++) { 
                if (usedColors.find(flower) == usedColors.end()) { // if the flower is not found in the used colors
                    answer[i] = flower;
                    break;
                }
            }
        }
        
        return answer;
    }
};