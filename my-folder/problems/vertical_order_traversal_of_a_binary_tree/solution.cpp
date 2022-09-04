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
     vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>m;
        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});
        vector<vector<int>>v;
        
        while(!q.empty())
        {
            auto it=q.front().first;
            int x=q.front().second.first;
            int y=q.front().second.second;
            q.pop();
            m[x][y].insert(it->val);
            
            if(it->left)q.push({it->left,{x-1,y+1}});
            if(it->right)q.push({it->right,{x+1,y+1}});
        }
        for(auto it:m)
        {
            vector<int>temp;
            for(auto t:it.second)
            {
                temp.insert(temp.end(),t.second.begin(),t.second.end());
            }
            v.push_back(temp);
        }
        return v;
    }
    
};