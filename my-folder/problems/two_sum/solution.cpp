class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans(2);
        map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            int n = nums[i];
            int x = target-nums[i];
            if(mp.count(x)){
                if(mp[x] != i){
                    ans[0] = i;
                    ans[1] = mp[x];
                    break;
                }
            }
        }
        return ans;
    }
};