/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    void helper(TreeNode* cl,TreeNode* &ans,int x){
        if(!cl){
            return;
        }
        if(cl->val==x){
            ans = cl;
            return;
        }
        helper(cl->left,ans,x);
        helper(cl->right,ans,x);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        int x = target->val;
        TreeNode* ans;
        helper(cloned,ans,x);
        return ans;
    }
};