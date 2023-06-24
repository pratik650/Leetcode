//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        int count=0;
        if(s1.size()!=s2.size()) return false;
        
        else{
            while(count!=s1.size()){
                int t=s1.at(0);
                s1.erase(s1.begin()+0);
                s1.push_back(t);
                if(s1==s2) return true;
                count++;
            }
            if(count==s1.size()) return false;
            
    return false;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        Solution obj;
        cout<<obj.areRotations(s1,s2)<<endl;

    }
    return 0;
}

// } Driver Code Ends