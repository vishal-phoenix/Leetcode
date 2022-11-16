class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vs){
        vs[i][j]=1;
        if(i+1>=0 && i+1<grid.size() && j>=0 && j<grid[0].size() && grid[i+1][j]==1){
            if(!vs[i+1][j]){
                dfs(i+1,j,grid,vs);
            }
        }
        if(i-1>=0 && i-1<grid.size() && j>=0 && j<grid[0].size() && grid[i-1][j]==1){
            if(!vs[i-1][j]){
                dfs(i-1,j,grid,vs);
            }
        }
        if(i>=0 && i<grid.size() && j+1>=0 && j+1<grid[0].size() && grid[i][j+1]==1){
            if(!vs[i][j+1]){
                dfs(i,j+1,grid,vs);
            }
        }
        if(i>=0 && i<grid.size() && j-1>=0 && j-1<grid[0].size() && grid[i][j-1]==1){
            if(!vs[i][j-1]){
                dfs(i,j-1,grid,vs);
            }
        }
        
        return;
    }
    int numEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size(),m=grid[0].size();
        vector<vector<int>> vs(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || i==n-1 || j==0 || j==m-1){
                    if(!vs[i][j] && grid[i][j]==1){
                        dfs(i,j,grid,vs);
                    }
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vs[i][j]){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};