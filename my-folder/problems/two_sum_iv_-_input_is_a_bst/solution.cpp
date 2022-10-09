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
    void printorder(TreeNode *node , vector<int> &v){
        if(node==nullptr){
            return ;
        }
        printorder(node->left,v);
        v.push_back(node->val);
        printorder(node->right,v);
    }

    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int> mp;
        vector<int> v;
        // v.push_back(root->val);
        if(root == nullptr){
            return false;
        }
       printorder(root,v);
       for(int i=0;i<v.size();i++){
           cout<<v[i]<<" ";
       }
       cout<<endl;
       for(int i=0;i<v.size();i++){
           if(mp.find(v[i])==mp.end()){
               mp[k-v[i]]=v[i];
           }else{
               return true;
           }
       }
       return false;

    }
};