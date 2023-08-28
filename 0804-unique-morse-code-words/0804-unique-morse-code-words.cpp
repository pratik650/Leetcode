class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
         char morseCodes[26][5] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
        ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
        ".--", "-..-", "-.--", "--.."
    };

    unordered_set<string> transformations;

    for (const string& word : words) {
        string transformation = "";
        for (char c : word) {
            transformation += morseCodes[c - 'a'];
        }
        transformations.insert(transformation);
    }

    return transformations.size();
    }
};