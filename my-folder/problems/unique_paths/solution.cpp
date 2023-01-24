class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> d(m,vector<int>(n,1));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j!=0){
                    d[i][j] = d[i][j-1];
                }else if(i!=0 && j==0){
                    d[i][j] = d[i-1][j];
                }else if(i!=0 && j!=0){
                    d[i][j] = d[i][j-1]+d[i-1][j];
                }
            }
        }
        return d[m-1][n-1];
    }
};