class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        int m = queries.size();
        vector<int> ans;
        int sum = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                sum += nums[i];
            }
        }
        for(int i=0;i<m;i++){
            if(nums[queries[i][1]]%2!=0){
                //cout<<1<<" ";
                int x = nums[queries[i][1]]+queries[i][0];
                //cout<<x<<" ";
                if(x%2==0){
                    sum += x;
                }
                nums[queries[i][1]] = x;
            }else{
                //cout<<2<<" ";
                int x = nums[queries[i][1]]+queries[i][0];
                //cout<<x<<" ";
                if(x%2==0){
                    sum += queries[i][0];
                }else{
                    sum -= nums[queries[i][1]];
                }
                nums[queries[i][1]] = x;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};