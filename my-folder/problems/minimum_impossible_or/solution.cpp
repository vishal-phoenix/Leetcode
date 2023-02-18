class Solution {
public:
    int minImpossibleOR(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int ans = 1;
        for(int i=0;i<n;i++){
            if(nums[i]==ans){
                ans = 2*ans;
            }else if(nums[i]>ans){
                break;
            }
        }
        return ans;
        
    }
};