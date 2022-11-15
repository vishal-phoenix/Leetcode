class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(),m = grid[0].size();
        vector<vector<int>> vs(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vs[i][j]=2;
                }
            }
        }
        int tm = 0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            tm = max(tm,t);
            q.pop();
            if(r+1>=0 && r+1<n && c>=0 && c<m && vs[r+1][c]!=2 && grid[r+1][c]==1){
                q.push({{r+1,c},t+1});
                vs[r+1][c] = 2;
            }
            if(r-1>=0 && r-1<n && c>=0 && c<m && vs[r-1][c]!=2 && grid[r-1][c]==1){
                q.push({{r-1,c},t+1});
                vs[r-1][c] = 2;
            }
            if(r>=0 && r<n && c+1>=0 && c+1<m && vs[r][c+1]!=2 && grid[r][c+1]==1){
                q.push({{r,c+1},t+1});
                vs[r][c+1] = 2;
            }
            if(r>=0 && r<n && c-1>=0 && c-1<m && vs[r][c-1]!=2 && grid[r][c-1]==1){
                q.push({{r,c-1},t+1});
                vs[r][c-1] = 2;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vs[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }
        return tm;
    }
};