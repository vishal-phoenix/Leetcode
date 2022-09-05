class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int x = 0;
        for(int i=0;i<n;i++){
            x^=nums[i];
        }
        return x;
        
    }
};