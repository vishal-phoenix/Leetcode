class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int cnd = -1;
        for(int i=0;i<n;i++){
            if(cnt == 0){
                cnd = nums[i];
            }
            if(nums[i] == cnd){
                cnt++;
            }else{
                cnt--;
            }
        }
        return cnd;
    }
};