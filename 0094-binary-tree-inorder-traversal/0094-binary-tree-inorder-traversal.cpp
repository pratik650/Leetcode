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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> str;
         if(root == NULL) return str;
        TreeNode* curr = new TreeNode();
        curr = root;
        stack<TreeNode*> s;
       
        
    
        while(curr!=NULL || !s.empty()){
            if(curr!=NULL){
                s.push(curr);
                curr = curr->left;
            }
            else{
            curr = s.top();
            s.pop();
            str.push_back(curr->val);
            curr= curr->right; 
            }
           
            
        }
        return str;
    }
};