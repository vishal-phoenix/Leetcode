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
    void helper(TreeNode* root,int val,TreeNode* &a){
        if(!root){
            return;
        }
        if(root->val == val){
            a = root;
            return;
        }
        helper(root->left,val,a);
        helper(root->right,val,a);
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* a = NULL;
        helper(root,val,a);
        return a;
    }
};