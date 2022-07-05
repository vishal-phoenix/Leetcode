class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        int ln = nums.size();
        vector<int> ans(2);
        for(int i=0;i<ln;i++){
            int sum;
            for(int j=i+1;j<ln;j++){
                int sum = nums[i] + nums[j];
                if(sum == target){
                    ans[0] = i;
                    ans[1] = j;
                    break;
                }
            }
            if(sum == target){
                    break;
            }
        }
        return ans;
    }
};