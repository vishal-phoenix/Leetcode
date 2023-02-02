class Solution {
public:
    int minPathSum(vector<vector<int>>& g) {
        int n = g.size(),m = g[0].size();
        vector<vector<int>> a(n,vector<int>(m,-1));
        a[0][0] = g[0][0];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                if(i==0 && j!=0){
                    x = g[i][j]+a[i][j-1];
                    a[i][j] = x;
                }else if(i!=0 && j==0){
                    x = g[i][j]+a[i-1][j];
                    a[i][j] = x;
                }else if(i!=0 && j!=0){
                    x = min(g[i][j]+a[i-1][j],g[i][j]+a[i][j-1]);
                    a[i][j] = x;
                }
                
            }
        }
        return a[n-1][m-1];
    }
};