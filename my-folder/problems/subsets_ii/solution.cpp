class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums,vector<int> spr,int ind){
        ans.push_back(spr);
        for(int i=ind;i<nums.size();i++){
            if(i!=ind && nums[i]==nums[i-1]) continue;
            spr.push_back(nums[i]);
            helper(nums,spr,i+1);
            spr.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> spr;
        int i=0;
        sort(nums.begin(),nums.end());
        //ans.push_back(spr);
        helper(nums,spr,0);
        return ans;
    }
};