class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mini= p[0];
        int profit= 0;
        
        for(int i=1;i<p.size();i++){
            int diff = p[i]-mini;
            profit = max(diff,profit);
            mini = min(p[i],mini);
        }
        
        return profit;
    }
};