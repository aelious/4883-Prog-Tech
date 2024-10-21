/**
* Name: Stephanie Nagel
* Course: CMPS 4883 - Prog Tech
* Date: 10/20/2024
*/

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        int largest = 0;
        string longest = "";
        map<string,int> frequency;
        vector<string> kfreq;
        for(int i = 0; i < words.size(); i++) {
            if (frequency[words[i]] == 0) {
                frequency[words[i]] = 1;
            } else {
                frequency[words[i]]++;
            }
        }
        
        for (int i = 0; i < k; i++) {
            for(map<string, int>::const_iterator it = frequency.begin(); it != frequency.end(); ++it) {
                cout << it->first << ": " << it->second;
                if (it->second > largest) {
                    largest = it->second;
                    longest = it->first;
                }
            }
            kfreq.push_back(longest);
            frequency.erase(longest);
            largest = 0;
            longest = "";
        }
        
    return kfreq;
    }
};