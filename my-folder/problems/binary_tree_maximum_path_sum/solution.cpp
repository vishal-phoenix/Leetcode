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
    int DFS(TreeNode* root,int &maxsum){
        if(root==NULL){
            return 0;
        }
        int l = DFS(root->left,maxsum);
        int r = DFS(root->right,maxsum);
        maxsum = max(maxsum,max(l+root->val,max(r+root->val,max(l+r+root->val,root->val))));
        return max(l+root->val,max(r+root->val,root->val));
    }
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN;
        DFS(root, maxSum);
        return maxSum;
    }
    
    
};