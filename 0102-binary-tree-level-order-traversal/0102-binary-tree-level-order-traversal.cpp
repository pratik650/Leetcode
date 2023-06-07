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
    vector<vector<int>> levelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode * curr = new TreeNode();
        vector<vector<int>>v;
         if(!root)
         return {};

         q.push(root);
         while(!q.empty()){
              vector<int>a;
              int size=q.size();
              while(size--){
                 curr=q.front();
                 q.pop();
                  
                 a.push_back(curr->val);
                 if(curr->left)
                 q.push(curr->left);
                 if(curr->right)
                 q.push(curr->right);
              }
             v.push_back(a);
             
         }
        return v;
    }
};