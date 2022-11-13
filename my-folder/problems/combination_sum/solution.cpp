class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> helper(vector<int>& candidates, int target,vector<int> str,int i){
        if(target==0){
            ans.push_back(str);
            return ans;
        }else if(target<0 || i==candidates.size()){
            return ans;
        }
        if(candidates[i]<=target){
            target-=candidates[i];str.push_back(candidates[i]);
            helper(candidates,target,str,i);
            target+=candidates[i];str.pop_back();
        }
        helper(candidates,target,str,i+1);
        return ans;

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> str;
        int i=0;
        helper(candidates,target,str,i);
        return ans;
    }
};