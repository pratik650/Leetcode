//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
    unordered_map<int, int> sumMap; 
    int maxcount = 0;
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += A[i];

        if (A[i] == 0 && maxcount == 0) {
            maxcount = 1;
        }

        if (sum == 0) {
            maxcount = i + 1;
        }

        if (sumMap.find(sum) != sumMap.end()) {
            maxcount = max(maxcount, i - sumMap[sum]);
        } else {
            sumMap[sum] = i;
        }
    }

    return maxcount;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends