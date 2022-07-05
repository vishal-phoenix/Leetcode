class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sze = nums.size();
        int cnt = 1,rlcnt ;
        if(sze>=1){
            rlcnt = 1;
        }else{
            rlcnt = 0;
        }
        for(int i=1;i<sze;i++){
            if(nums[i] == nums[i-1]+1){
                cnt++;
            }else if(nums[i] == nums[i-1]){
                continue;
            }else{
                cnt = 1;
            }
            rlcnt = max(rlcnt,cnt);
        }
        return rlcnt;
    }
};