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
    int sum=0;
    void helper (bool isleft, TreeNode* root){
        if(!root){
            return;
        }
        if(!root -> left && !root->right && isleft==1){
            sum+=root ->val;
            return;
        }
        helper(1,root->left);
        helper(0,root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return 0;
        }
        bool isleft = 0;
        helper(isleft,root);
        return sum;
    }
};