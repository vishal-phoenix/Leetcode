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
   vector<pair<double,int>>sum;

        void rec(TreeNode* root , int level){
            if(!root) return;
            if(sum.size()>level){
                sum[level].first+=root->val;
                sum[level].second++;
            }
            else{
               sum.push_back({root->val,1});
            }
            rec(root->left,level+1);
            rec(root->right,level+1);
        }
        vector<double> averageOfLevels(TreeNode* root) 
        {
            vector<double> avg;
            rec(root,0);
            for(int i=0;i<sum.size();i++){
                avg.push_back(sum[i].first/(double)sum[i].second);
            }
            return avg;
    }
};