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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        int j=0;
        while(!q.empty()){
            int cnt = q.size();
            vector<int> a;
            for(int i=0;i<cnt;i++){
                TreeNode* x = q.front();
                q.pop();
                a.push_back(x->val);
                if(x->left) q.push(x->left);
                if(x->right) q.push(x->right);
            }
            if(j%2!=0){
                reverse(a.begin(),a.end());
            }
            j++;
            ans.push_back(a);
        }
        return ans;
    }
};