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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res; 
        stack<TreeNode*> str;
        if(root == NULL) return res;
        str.push(root);
        while(!str.empty()){
            root = str.top();
            res.push_back(root->val);
            str.pop();
            
             if(root->right != NULL){
                str.push(root->right);
            }
            if(root->left != NULL){
                str.push(root->left);
            }
           
        }
       
        return res;
    }
};