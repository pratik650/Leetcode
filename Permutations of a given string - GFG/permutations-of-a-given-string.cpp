//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		vector<string>find_permutation(string S)
		{
	vector<string> permutations;

    // Sort the string to handle duplicate characters correctly
    string sortedStr = S;
    sort(sortedStr.begin(), sortedStr.end());

    // Find permutations using the sorted string
    do {
        permutations.push_back(sortedStr);
    } while (std::next_permutation(sortedStr.begin(), sortedStr.end()));

    return permutations;
		}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends