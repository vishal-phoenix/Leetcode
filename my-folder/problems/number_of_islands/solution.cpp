class Solution {
public:
    void makeTheIsland(int n,int m,int x,int y, vector<vector<char>> &grid){
        if(x==n || y==m || x<0 || y<0 || grid[x][y]!='1'){
            return;
        }
        grid[x][y] = '2';
        makeTheIsland(n,m,x+1,y,grid);
        makeTheIsland(n,m,x-1,y,grid);
        makeTheIsland(n,m,x,y-1,grid);
        makeTheIsland(n,m,x,y+1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n  = grid.size();
        if(n==0){
            return 0;
        }
        int m = grid[0].size();
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1'){
                    makeTheIsland(n,m,i,j,grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};