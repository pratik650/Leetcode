/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(std::vector<int>& nums, int start, int end) {
    if (start > end) {
        return nullptr; // Base case: empty subtree
    }

    int middle = (start + end) / 2;
    TreeNode* root = new TreeNode(nums[middle]);

    root->left = sortedArrayToBST(nums, start, middle - 1);
    root->right = sortedArrayToBST(nums, middle + 1, end);

    return root;
}

    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
};