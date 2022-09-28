class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int l = 0 ;l<n-3;l++){
            long long tr= target-nums[l];
            if(l==0 || (nums[l]!=nums[l-1])){
        for(int i=l+1;i<n-2;i++){
            if(i==l+1 || (nums[i]!=nums[i-1])){
                int lo = i+1,hi=n-1;
                long long tr1 = tr-nums[i];
                while(lo<hi){
                    if(nums[lo]+nums[hi]==tr1){
                        vector<int> temp;
                        temp.push_back(nums[l]);
                        temp.push_back(nums[i]);
                        temp.push_back(nums[lo]);
                        temp.push_back(nums[hi]);
                        
                        ans.push_back(temp);
                        
                        while(lo<hi && nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi && nums[hi]==nums[hi-1]) hi--;
                    
                        lo++;hi--;
                    }
                    else if(nums[lo]+nums[hi]<tr1){
                        lo++;
                    }else{
                        hi--;
                    }
                    
                }
                
            }
        }
            }
        }
        return ans;
    }
};