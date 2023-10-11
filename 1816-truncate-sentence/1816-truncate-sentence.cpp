class Solution {
public:
    string truncateSentence(string s, int k) {
        
        int size = s.size();
        string str;
        int count=0;
        for (int i = 0; i < size && count < k; i++) {
            if (isalpha(s[i])) {
                str += s[i];
            } else if (s[i] == ' ') {
                count++;
                if (count < k) {
                    str += s[i];
                }
            }
        }
        
        return str;
    }
};