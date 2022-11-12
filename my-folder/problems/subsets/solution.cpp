class Solution {
public:
    vector<vector<int>> ans;
    void helper(vector<int>& nums,int i,vector<int> str){
        if(i==nums.size()){
            ans.push_back(str);
            return;
        }
        helper(nums,i+1,str);
        str.push_back(nums[i]);
        helper(nums,i+1,str);
        return;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> str;
        int i=0;
        helper(nums,i,str);
        return ans;
    }
};