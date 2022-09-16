class Solution {
public:
    void rotate(vector<vector<int>>& a) {
         // round 1: 
        // -------------------
        // tmp <- 1
        // top left cell matrix[i][j] (1) <- bottom left 7 cell (matrix[n - j - 1][i])
        // bottom left 7 cell (matrix[n - j - 1][i]) <- bottom right cell 9 (matrix[n - i - 1][n - j - 1])
        // bottom right cell 9 (matrix[n - i - 1][n - j - 1]) <- top right cell 3 (matrix[j][n - i - 1])
        // top right cell 3 (matrix[j][n - i - 1]) <- 1 (tmp)

        // 1 2 3    7 2 1
        // 4 5 6 => 4 5 6
        // 7 8 9    9 8 7

        // // round 2:
        // -------------------
        // tmp <- 2
        // 2 (matrix[i][j]) <- 4 (matrix[n - j - 1][i])
        // 4 (matrix[n - j - 1][i]) <- 8 (matrix[n - i - 1][n - j - 1])
        // 8 (matrix[n - i - 1][n - j - 1]) <- 6 (matrix[j][n - i - 1])
        // 6 (matrix[j][n - i - 1]) <- 2 (tmp)

        // 1 2 3    7 2 1    7 4 1
        // 4 5 6 => 4 5 6 => 8 5 2
        // 7 8 9    9 8 7    9 6 3
        int n = a.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(a[i][j],a[j][i]);
            }
        }
		for(int i = 0; i < n; i++) {
            reverse(a[i].begin(),a[i].end());
        }
        return;
    }
};