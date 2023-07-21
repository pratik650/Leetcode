class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
int count = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int i = 0; // Pointer for g vector
        int j = 0; // Pointer for s vector
        
        while (i < g.size() && j < s.size()) {
            if (g[i] <= s[j]) {
                count++;
                i++;
            }
            j++;
        }
        
        return count;
    }
};