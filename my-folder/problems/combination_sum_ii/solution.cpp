class Solution {
public:
    vector<vector<int>> ans;
    vector<vector<int>> helper(vector<int>& candidates, int target,vector<int> spr,int i=0){
        if(target==0){
            ans.push_back(spr);
            return ans;
        }else if(i==candidates.size()){
            return ans;
        }

        int w = i;

        while(i<candidates.size()){
            if(i>w){
                if(candidates[i]!=candidates[i-1]){
                    if(candidates[i]<=target){
                        spr.push_back(candidates[i]);
                        target -= candidates[i];
                        helper(candidates,target,spr,i+1);
                        target += candidates[i];
                        spr.pop_back();
                    }
                    else{
                        return ans;
                    }
                }

            }else{
                if(candidates[i]<=target){
                    spr.push_back(candidates[i]);
                    target -= candidates[i];
                    helper(candidates,target,spr,i+1);
                    target += candidates[i];
                    spr.pop_back();
                }
                else{
                    return ans;
                }
            }
            i++;
        }
        return ans;
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> spr;
        int i=0;
        helper(candidates,target,spr,i);
        return ans;

    }
};