//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    string maxOdd(string num) {
         string st;
        int t=num.size();
        if(num[t-1]%2!=0) return num;
        if(t==1) return st;
       
       
         for(int i=num.size()-1;i>=0;i--){
            if(num[i]%2==0){
                num.erase(i,1);
            }
             else return num;
        }
        
        return num;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;

        cout << ob.maxOdd(s) << endl;
    }
}

// } Driver Code Ends