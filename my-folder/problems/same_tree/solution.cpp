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
int helper(TreeNode* r1,TreeNode* r2, bool &ch){
    if(!ch){
        return 0;
    }
    if((r1==NULL && r2!=NULL) || (r1!=NULL && r2==NULL)){
        ch = false;
        return 0;
    }else if(r1==NULL && r2==NULL){
        return 1;
    }
    if(r1->val!=r2->val){
        ch = false;
        return 0;
    }
    helper(r1->left,r2->left,ch);
    helper(r1->right,r2->right,ch);
    return 1;
}


class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool ch = true;
        helper(p,q,ch);
        return ch;
    }
};