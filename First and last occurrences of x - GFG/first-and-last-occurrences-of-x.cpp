//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int nums[], int n , int target )
{
    vector<int> res;
        int low=-1;
        int hi=-1;
        
        for(int i=0;i<n;i++){
            if(nums[i]!=target){
            continue;
            }
            else if(low==-1) {
                low = i;
                hi=i;
                res.push_back(low);
            }
            else hi = i;
        }
        
        if(low==-1){
            res.push_back(low);
            res.push_back(hi);
        }else{
            res.push_back(hi);
        }
        return res;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends