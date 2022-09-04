class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi = 0;
        int n = nums.size();
        int curr = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                curr++;
            }else{
                maxi = max(maxi,curr);
                curr = 0;
            }
        }
        maxi = max(maxi,curr);
        return maxi;
    }
};