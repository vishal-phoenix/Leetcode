class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int x = n/2;
        int cnt = 0;
        for(int i=0;i<x;i++){
            cnt = cnt + (nums[x] - nums[i]);
        }
        for(int i=x+1;i<n;i++){
            cnt = cnt + (nums[i] - nums[x]);
        }
        return cnt;
        
    }
};