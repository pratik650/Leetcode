class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<int> st;
        string temp;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                cout<<s[i];
                st.push(s[i]);
            }
            if(st.size()>1) {
                temp+= s[i];
            }
            if(s[i]==')') st.pop();
        }
        return temp;
    }
};