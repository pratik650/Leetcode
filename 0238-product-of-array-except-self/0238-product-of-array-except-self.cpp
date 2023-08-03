class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> leftProducts(n, 1);
        vector<int> rightProducts(n, 1);
        vector<int> res(n, 1);

        // Calculate products of all elements to the left of each element.
        for (int i = 1; i < n; i++) {
            leftProducts[i] = leftProducts[i - 1] * nums[i - 1];
        }

        // Calculate products of all elements to the right of each element.
        for (int i = n - 2; i >= 0; i--) {
            rightProducts[i] = rightProducts[i + 1] * nums[i + 1];
        }

        // Calculate the final result.
        for (int i = 0; i < n; i++) {
            res[i] = leftProducts[i] * rightProducts[i];
        }

        return res;
    }
};
