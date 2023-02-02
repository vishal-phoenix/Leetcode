class Solution {
public:
    int minimumTotal(vector<vector<int>>& t) {
        int n = t.size();
        vector<vector<int>> a(n,vector<int>(n,-1));
        a[0][0] = t[0][0];
        for(int i=1;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0){
                    a[i][j] = a[i-1][j]+t[i][j];
                }else if(j==i){
                    a[i][j] = a[i-1][j-1]+t[i][j];
                }else{
                    a[i][j] = min(a[i-1][j]+t[i][j],a[i-1][j-1]+t[i][j]);
                }
            }
        }
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            ans = min(ans,a[n-1][i]);
        }
        return ans;
    }
};