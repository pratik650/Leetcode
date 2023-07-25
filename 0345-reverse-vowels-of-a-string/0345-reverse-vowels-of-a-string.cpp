class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) { // Use 'while (i < j)' instead of 'while (i == j)'
            if ((isVowel(s[i])) && (isVowel(s[j]))) {
                char temp = s[i];
                s[i] = s[j];
                s[j] = temp;
                i++;
                j--;
            } else {
                if (!isVowel(s[i])) {
                    i++;
                }
                if (!isVowel(s[j])) {
                    j--;
                }
            }
        }

        return s;
    }

    bool isVowel(char c) {
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
                c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    }
};
