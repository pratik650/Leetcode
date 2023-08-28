class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> charCount;
        for (char c : s) {
            charCount[c]++;
        }

        vector<pair<char, int>> charFrequency;
        for (auto entry : charCount) {
            charFrequency.push_back(entry);
        }

        sort(charFrequency.begin(), charFrequency.end(), 
             [](const pair<char, int>& a, const pair<char, int>& b) {
                 return a.second > b.second;
             });

        string result;
        for (auto entry : charFrequency) {
            result.append(entry.second, entry.first);
        }

        return result;
    }
};