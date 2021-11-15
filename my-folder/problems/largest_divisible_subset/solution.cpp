class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1)return nums;
        sort(nums.begin(), nums.end());
        
        vector<vector<int>> result(n , vector<int>());
        int max_len = 1;
        int max_idx = 0;
        
        for(int i = n-1; i>= 0;i--){
            result[i].push_back(nums[i]);
            int j = i+1;
            int _max = 0;
            int _max_idx = i;
            while(j < n){
                if(nums[j] % nums[i] == 0 && result[j].size() > _max){
                    _max = result[j].size();
                    _max_idx = j;
                }
                j++;
            }
            if(_max_idx != i){
                result[i].insert(result[i].end(), result[_max_idx].begin(), result[_max_idx].end());
                if(_max + 1 > max_len){
                    max_len = _max + 1;
                    max_idx = i;
                }
            }
        }
        return result[max_idx];
        
    }
};