class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        unordered_set<int> seen;

        // Count occurrences of each number
        for (int i = 0; i < arr.size(); i++) {
            freq[arr[i]]++;
        }

        // Check whether frequencies are unique
        for (auto it : freq) {
            if (seen.find(it.second) != seen.end()) {
                return false;
            }

            seen.insert(it.second);
        }

        return true;
    }
};