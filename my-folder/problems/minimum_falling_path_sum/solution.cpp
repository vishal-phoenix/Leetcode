class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& a) {
        int n = a.size();
        int sum = 0;
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                int mini = a[i-1][j];
                if(j>0){
                    mini = min(mini,a[i-1][j-1]);
                }
                if(j<n-1){
                    mini = min(mini,a[i-1][j+1]);
                }
                a[i][j]+=mini;
            }
        }
        int ans=INT_MAX;
        for(int i=0;i<n;i++){
            ans = min(ans,a[n-1][i]);
        }
        return ans;
    }
};