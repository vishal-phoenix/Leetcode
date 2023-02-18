class Solution {
public:
    bool canPartition(vector<int>& nums) {
       int n = nums.size();
        
        // total sum
        int sum = 0;
        for(auto it: nums)sum+=it;
        if(sum&1)return false;

        //2d dp array
        vector<bool> prev((sum/2)+1, 0), cur((sum/2)+1,0);
        prev[0] = cur[0] = true;
        
        // base cases
        if(nums[0]<= sum/2)prev[nums[0]] = true;

        // stuff on array i.e pick or not pick cases
        for(int ind=1 ; ind<n ; ind++){
            for(int tar=1 ; tar<=sum/2 ; tar++){
                bool np = prev[tar];
                bool p = false;
                if(nums[ind] <= tar) p = prev[tar-nums[ind]];

                cur[tar] = p || np;
            }
            prev = cur;
        }

        //returning the answer
        return prev[sum/2];
        
    }
};