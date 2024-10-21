/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 10/20/2024
*/

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        map<int, int> keys;
        map<int, int> entered;
        int openedRooms = -1;
        keys[0] = 1; // room 0 starts with a key
        bool flag = true; // new rooms to search
        while (flag) {
            flag = false;
            for (map<int, int>::iterator it = keys.begin(); it != keys.end(); it++) {
                if (entered[it->first] == 0 && it->second == 1) {
                    for (int i = 0; i < rooms[it->first].size(); i++){
                        if (keys[rooms[it->first][i]] == 0) {
                            keys[rooms[it->first][i]] = 1;
                            flag = true; // new key found, continue to search through the unopened rooms
                        }
                    }
                    entered[it->first] = 1;
                }
            }
        }
        for (int i = 0; i < rooms.size(); i++) {
            if (keys[i] == 0) {
                // no key for this room
                return false;
            }
        }
        // fallback to true if no rooms found without keys
        return true;
    }
};