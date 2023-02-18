class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int x = abs(nums[2]-nums[nums.size()-1]);
        int y = abs(nums[nums.size()-3]-nums[0]);
        int z = abs(nums[1]-nums[nums.size()-2]);
        return min(x,min(y,z));
    }
};