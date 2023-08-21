class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string result = "";
        
        for(int i=0; i<s.size(); i++) {
            if(s[i] == '(') {
                if(!st.empty()) {
                    result += '(';
                }
                st.push('(');
            }
            else if(s[i] == ')') {
                st.pop();
                if(!st.empty()) {
                    result += ')';
                }
            }
        }
        
        return result;
    }
};
