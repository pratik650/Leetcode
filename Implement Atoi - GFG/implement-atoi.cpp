//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int atoi(string str) {
       int j = 0;
    vector<int> vt;
    int i = 0;
    int sign = 1;  // Initialize sign as positive

    // Check for and handle the sign character if present
    if (str[0] == '-') {
        sign = -1;
        i = 1;  // Move to the next character after the sign
    }

    for (; i < str.length(); i++) {
        if (str[i] < '0' || str[i] > '9') {
            return -1;  // Non-digit character encountered
        }
        vt.push_back(str[i] - '0');
        j = j * 10 + vt[i - (sign == -1 ? 1 : 0)]; // Adjust the index if the number is negative
    }

    return j * sign;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends