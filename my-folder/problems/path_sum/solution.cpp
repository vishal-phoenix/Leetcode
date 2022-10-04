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
bool foundSum(TreeNode* root,int sum, int targetSum)
{
if(root==nullptr)
{
if(sum==targetSum)
return true;
return false;
}
sum=sum+root->val;
if(root->left==nullptr&&root->right==nullptr&& sum==targetSum)
{
return true;
}
else if(root->left!=nullptr&&foundSum(root->left,sum,targetSum))
{
return true;
}
else if(root->right!=nullptr && foundSum(root->right,sum,targetSum))
{
return true;
}

    return false;
}
bool hasPathSum(TreeNode* root, int targetSum) {
    if(root==nullptr)
        return false;
    return foundSum(root, 0, targetSum);
}
};