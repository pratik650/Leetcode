class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int low=-1;
        int hi=-1;
        
        for(int i=0;i<nums.size();i++){
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
};