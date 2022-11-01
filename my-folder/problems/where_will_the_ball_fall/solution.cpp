class Solution {
public:
    int solve(int i, int j, vector<vector<int>>& grid, int m, int n){
        if(i == m) return j;
        
        if(grid[i][j] == 1 && j + 1 < n && grid[i][j + 1] == 1){
            return solve(i + 1, j + 1, grid, m, n);
        }
        
        if(grid[i][j] == -1 && j - 1 >= 0 && grid[i][j - 1] == -1){
            return solve(i + 1, j - 1, grid, m, n);
        }
        
        return -1;
    }
    
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<int> fall(n);
        
        for(int i = 0; i < n; i++){
            fall[i] = solve(0, i, grid, m, n);
        }
        
        return fall;
    }
};