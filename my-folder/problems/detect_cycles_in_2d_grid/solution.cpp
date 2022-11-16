class Solution {
public:
    int n,m;
    int fx[4] = {1, -1, 0, 0};
    int fy[4] = {0, 0, 1, -1};
    bool dfs(int r,int c,vector<vector<char>>&grid, vector<vector<bool>>& vs, int pr,int pc){
        vs[r][c] = 1;
        for(int i=0;i<4;i++){
            int nr = r+fx[i];
            int nc = c+fy[i];
            if(nr>=0 && nr<grid.size() && nc>=0 && nc<grid[0].size() && !(nr==pr && nc==pc) && grid[nr][nc] == grid[r][c]){
                if(vs[nr][nc] || dfs(nr,nc,grid,vs,r,c)){
                    return true;
                }
            }
        }
        return false;
    }
    bool containsCycle(vector<vector<char>>& grid) {
        n = grid.size();m = grid[0].size();
        vector<vector<bool>> vs(n,vector<bool>(m,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vs[i][j]) 
                    if(dfs(i,j,grid,vs,-1,-1)) return true;
            }
        }
        return false;
    }
};