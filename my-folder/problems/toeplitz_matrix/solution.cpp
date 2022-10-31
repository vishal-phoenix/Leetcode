class Solution {
public:
     bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int i = 1, j = 1;
        while( i< matrix.size() && j < matrix[0].size()) {
            if (matrix[i][j] != matrix[i-1][j-1])
                return false;
             j++;
             if ( j >= matrix[0].size()) {
                 i++; j = 1;
             }   
        }

        return true;
    }
};