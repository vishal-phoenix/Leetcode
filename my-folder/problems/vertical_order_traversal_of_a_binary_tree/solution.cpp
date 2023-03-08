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
    void helper(TreeNode* root,int k,int z,map<pair<int,int>,vector<int>>& mp){
        if(!root){
            return;
        }
        mp[{z,k}].push_back(root->val);
        int y = k;
        int g = z;
        z+=1;
        k-=1;
        helper(root->left,k,z,mp);
        k = y;
        k+=1;
        helper(root->right,k,z,mp);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<pair<int,int>,vector<int>>mp;
        vector<vector<int>> ans;
        if(!root){
            return ans;
        }
        helper(root,0,0,mp);
        // for(auto it: mp){
        //     for(auto y:it.second){
        //         cout<<y<<" ";
        //     }
        //     cout<<endl;
        // }
        map<int,vector<int>>mp2;
        for(auto it:mp){
            sort(it.second.begin(),it.second.end());
            for(auto g:it.second){
                mp2[it.first.second].push_back(g);
            }
            
        }
        for(auto it:mp2){
            ans.push_back(it.second);
        }
        return ans;
    }
};