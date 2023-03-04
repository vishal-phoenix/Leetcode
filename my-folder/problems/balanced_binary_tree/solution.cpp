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
int helper(TreeNode* root, bool& ch){
    if(!ch){
        return 0;
    }
    if(root==NULL){
        return 0;
    }
    int l = helper(root->left,ch);
    int r = helper(root->right,ch);
    if(abs(l-r)>1){
        ch = false;
        return 0;
    }
    return max(l,r)+1;
}
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        bool ch = true;
        helper(root,ch);
        return ch;
    }
};