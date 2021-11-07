class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        long p=0;
        for(auto d:nums) p^=d;
        int rmsb=1;
        while (!(p&rmsb)) rmsb = rmsb<<1;
        
        int x=0, y=0;
        for(auto d:nums){
            if(d&rmsb) x^=d;
            else y^=d;
        }
        vector<int> ans(2);
        ans[0]=x,ans[1]=y;
        return ans;
    }
};