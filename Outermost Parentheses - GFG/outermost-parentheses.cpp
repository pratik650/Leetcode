//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string removeOuter(string& s) {
         stack<int> st;
        string temp;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
            
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

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;

        cout << obj.removeOuter(s) << "\n";
    }
}
// } Driver Code Ends