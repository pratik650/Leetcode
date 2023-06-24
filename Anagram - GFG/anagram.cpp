//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string s, string t){
        
        int count=0;
        if(s.size()!=t.size()) return false;
        
        for(int i=0;i<s.size();i++){
            
            for(int j=0;j<s.size();j++){
                if(s[i]==t[j]){
                     t.erase(t.begin() + j);
                     break;
                }
               
            }
        }
        
        if(t.size()==0 && count ==0 ) return true;
        
        return false;
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends