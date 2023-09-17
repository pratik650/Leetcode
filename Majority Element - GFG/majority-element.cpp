//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int A[], int N)
    {
    int candidate = 0;
    int count = 0;
    
    for (int i = 0; i < N; i++) {
        if (count == 0) {
            candidate = A[i];
        }
        
        if (A[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    
    // At this point, 'candidate' may be the majority element, but we need to verify it.
    int majorityCount = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == candidate) {
            majorityCount++;
        }
    }
    
    if (majorityCount > N / 2) {
        return candidate;
    } else {
        // There is no majority element in the array.
        return -1;
    }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends