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
    TreeNode* pruneTree(TreeNode* root) {
        // if root is nullptr, then return nullptr
        if (!root) return nullptr;
        // DFS on left sub tree
        root->left = pruneTree(root->left);
        // DFS on right sub tree
        root->right = pruneTree(root->right);
        // !root->left means the left sub tree doesn't contain 1
        // !root->right means the right sub tree doesn't contain 1
        // !root->val means the current node value is 0
        // for this case, return nullptr
        // else we can keep the node
        return (!root->left && !root->right && !root->val) ? nullptr : root;
        
    }
};