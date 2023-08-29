//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends



class Solution
{
    public:
    string reverseWord(string str)
    {
        string s;
        // reverse(s.begin(),s.end());
        // return s;
        
        for(int i=str.size();i>=0;i--){
            s += str[i];
        }
        
        return s;
    }
};



//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
    	string s;
    	cin >> s;
    	Solution ob;
    	cout << ob.reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends