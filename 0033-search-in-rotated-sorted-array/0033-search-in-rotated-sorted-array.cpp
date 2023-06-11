class Solution {
public:
    int search(vector<int>& nums, int target) {
    int count=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=target){
                continue;
            }
            else if(nums[i]==target){
                count=i;
            }
        }
        return count;
    }
};