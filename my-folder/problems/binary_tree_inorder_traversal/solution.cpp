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
    vector<int> ans;
    void inorder(TreeNode* node) {
        if (node == NULL) return;
        // traverse the left node
        inorder(node->left);
        // do something with node value here
        ans.push_back(node->val);
        // traverse the right node
        inorder(node->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};