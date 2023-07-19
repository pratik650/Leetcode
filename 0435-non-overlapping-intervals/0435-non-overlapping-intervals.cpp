class Solution {
public:
    bool static comp(vector<int> &el1, vector<int> &el2){
        if(el1[1] < el2[1]) return true;
        return false;
    }
    int eraseOverlapIntervals(vector<vector<int>>& arr) {
        
        int n= arr.size();
        
        sort(arr.begin(), arr.end(), comp);
        int ans = 0;
        int y = arr[0][1];
        for(int i = 1; i < n; i++){
            if(arr[i][0] >= y){
                y = arr[i][1];
            }
            else{
                ans++;
            }
        }
        
        return ans;
    }
};