class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int l = nums.size();
        vector<int> p;
        vector<int> n;
        vector<int> ans;
        for(int i=0;i<l;i++){
            if(nums[i]>=0){
                p.emplace_back(nums[i]);
            }else{
                n.emplace_back(nums[i]);
            }
        }
        int sp = p.size(),sn = n.size();
        int i=0,j=0;
        
        while(i<sp && j<sn){
            ans.emplace_back(p[i]);
            ans.emplace_back(n[j]);
            i++,j++;
        }
        while(i<sp){
            ans.emplace_back(p[i]);
            i++;
        }
        while(j<sn){
            ans.emplace_back(n[j]);
            j++;
        }
        return ans;
    }
};