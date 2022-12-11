class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        long long n = nums.size();
        long long cnt=0,maxi = INT_MIN;
        unordered_set<float> st;
        for(auto it:nums){
            st.insert((float)it);
        }
        for(long long i=0;i<n;i++){
            cnt=1;
            long long j = 1;
            float k = (float)nums[i];
            while(j<n){
                k = sqrt(k);
                if(st.find(k)!=st.end()){
                    cnt++;
                }
                else{
                    break;
                }
                j++;
            }
            maxi = max(maxi,cnt);
        }
        if(maxi<=1){
            return -1;
        }
        return maxi;
    }
};