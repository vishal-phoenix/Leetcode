class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int flag = 0;
        for(int i=0;i<n;i++){
            if(nums[i]>nums[(i+1)%n]){
                flag++;
            }
            if(flag>1){
                return false;
            }
        }
        if(flag>1){
            return false;
        }
        return true;
    }
};