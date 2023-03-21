class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long x = 0;
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                x++;
            }else{
                ans+=((x*(x+1))/2);
                x=0;
            }
        }
        if(x!=0){
            ans+=((x*(x+1))/2);
        }
        return ans;
    }
};