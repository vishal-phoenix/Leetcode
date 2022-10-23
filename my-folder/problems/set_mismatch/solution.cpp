class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        set<int> st;
        int rpt,mis;
        for(int i=0;i<nums.size();i++){
            if(st.count(nums[i])){
                rpt = nums[i];
                break;
            }else{
                st.insert(nums[i]);
            }
        }
        int x = nums.size();
        int sum1 = (x*(x+1))/2;
        int sum2 = 0;
        for(int i=0;i<nums.size();i++){
            sum2+=nums[i];
        }
        sum2-=rpt;
        vector<int> ans(2);
        ans[0] = rpt;
        ans[1] = sum1-sum2;
        return ans;
    }
};