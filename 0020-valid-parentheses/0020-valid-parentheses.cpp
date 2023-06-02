class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        int size = s.size();
        for(int i=0;i<size;i++){

            if((s[i]=='(')||(s[i]=='{')||(s[i]=='[')){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
               char top = st.top();
                if((top=='('&& s[i]==')')||(top=='['&& s[i]==']')||(top=='{'&& s       [i]=='}')){
                    
                st.pop();
                }
                else return false;
            }
            
        }
        
        if(!st.empty()) return false;
        else return true;
    }
};