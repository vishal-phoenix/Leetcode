class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        for(int i=0;i<grid.size();i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            int maxi = INT_MIN;
            for(int j=0;j<m;j++){
                maxi = max(maxi,grid[j][i]);
            }
            sum+=maxi;
        }
        return sum;
    }
};