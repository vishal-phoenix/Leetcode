class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        vector<vector<int>> vs(n,vector<int>(m,0));
        vector<vector<int>> ans(n,vector<int>(m,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    vs[i][j] = 1;
                    q.push({{i,j},0});
                }
            }
        }
        while(!q.empty()){
            int r = q.front().first.first, c = q.front().first.second;
            int d = q.front().second;
            q.pop();
            ans[r][c] = d;
            if(r+1>=0 && r+1<n && c>=0 && c<m && vs[r+1][c]==0){
                q.push({{r+1,c},d+1});
                vs[r+1][c] = 1;
            }
            if(r-1>=0 && r-1<n && c>=0 && c<m && vs[r-1][c]==0){
                q.push({{r-1,c},d+1});
                vs[r-1][c] = 1;
            }
            if(r>=0 && r<n && c+1>=0 && c+1<m && vs[r][c+1]==0){
                q.push({{r,c+1},d+1});
                vs[r][c+1] = 1;
            }
            if(r>=0 && r<n && c-1>=0 && c-1<m && vs[r][c-1]==0){
                q.push({{r,c-1},d+1});
                vs[r][c-1] = 1;
            }
            
        }
        return ans;

    }
};