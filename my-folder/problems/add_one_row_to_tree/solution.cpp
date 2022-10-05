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
    void dfs(TreeNode* root, int val, int depth, int cd) {
    if (root==NULL) return;

    if (depth-cd==1) {
        // store original left and right subtree
        TreeNode* left = root->left;
        TreeNode* right = root->right;

        // create new left and right subtree's root
        root->left=new TreeNode(val);
        root->right=new TreeNode(val);

        // put the stored left and right subtree to as node's subtree
        root->left->left=left;
        root->right->right=right;

        return;
    }

    dfs(root->left, val, depth, cd+1);
    dfs(root->right, val, depth, cd+1);
}

TreeNode* addOneRow(TreeNode* root, int val, int depth) {
    if (depth == 1) {
        TreeNode* newRoot = new TreeNode(val);
        newRoot->left=root;
		return newRoot;
    }

    dfs(root, val, depth, 1);

    return root;
}
};