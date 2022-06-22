class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lnt = nums.size();
        int answ = nums[lnt-k];
        return answ;
    }
};