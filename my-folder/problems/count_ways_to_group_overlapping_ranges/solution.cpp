class Solution {
public:
    int countWays(vector<vector<int>>& r) {
        int cnt = 1;
        sort(r.begin(),r.end());
        int maxi = r[0][1];
        for(int i=1;i<r.size();i++){
            if(r[i][0]<=maxi){
                maxi = max(r[i][1],maxi);
                continue;
            }else{
                maxi = r[i][1];
                cnt++;
            }
        }
        int ans = 1;
        for(int i=0;i<cnt;i++){
            ans = (long(ans)*2)%1000000007;
        }
        return ans;
    }
};