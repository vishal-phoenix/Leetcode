class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i,n=nums.size(),reachable=0;

        for(i=0;i<n;i++)
        {
            if(reachable < i)
            {    
                return false;
            }

            reachable = max(reachable,i+nums[i]);
        }

        return true;

    }
};