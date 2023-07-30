class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>res;
       int n=arr.size();
        sort(arr.begin(),arr.end());
        int D=INT_MAX;
      for(int i=1;i<n;i++){
          D=min(D,arr[i]-arr[i-1]);
          
      }
        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]==D){
                vector<int>v{arr[i-1],arr[i]};
               res.push_back(v);
            }
        }
        return res;
    }
};