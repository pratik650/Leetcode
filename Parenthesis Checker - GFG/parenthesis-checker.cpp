//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
public:
    bool ispar(string x) {
        stack<char> st;

        if (x.size() % 2 != 0) {
            return false;
        }

        for (int i = 0; i < x.size(); i++) {
            if (x[i] == '{' || x[i] == '[' || x[i] == '(') {
                st.push(x[i]);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                if ((x[i] == '}' && top == '{') ||
                    (x[i] == ')' && top == '(') ||
                    (x[i] == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};


//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends