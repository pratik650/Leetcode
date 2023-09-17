//{ Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++


class Solution
{
   public:
   void generateFibonacci(int n, std::vector<long long>& vct) {
        
        if (n <= 0) {
        return;
    } else if (n == 1) {
        vct.push_back(1);
        return;
    } else if (n == 2) {
        vct.push_back(1);
        vct.push_back(1);
        return;
    } else {
        generateFibonacci(n - 1, vct);
        long long r = vct[n - 2] + vct[n - 3];
        vct.push_back(r);
    }
    }
    
    std::vector<long long> printFibb(int n) {
        std::vector<long long> vct;
        generateFibonacci(n, vct);
        return vct;
    }
};

//{ Driver Code Starts.
int main()
 {
     //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking number of elements
        int n;
        cin>>n;
        Solution obj;
        //calling function printFibb()
        vector<long long> ans = obj.printFibb(n);
        
        //printing the elements of vector
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends