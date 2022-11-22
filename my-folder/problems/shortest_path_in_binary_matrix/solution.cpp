class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>> cp(n,vector<int>(n,INT_MAX));
        cp[0][0] = 1;
        queue<pair<int,pair<int,int>>> q;
        q.push({1,{0,0,}});
        vector<int> dr = {-1,-1,0,1,1,1,0,-1};
        vector<int> dc = {0,1,1,1,0,-1,-1,-1};
        if(grid[0][0]!=0){
            return -1;
        }
        while(!q.empty()){
            int ds = q.front().first;
            int row = q.front().second.first;
            int col = q.front().second.second;
            q.pop();
            for(int i=0;i<8;i++){
                int newr = row+dr[i];
                int newc = col+dc[i];
                if(newr>=0 && newr<n && newc>=0 && newc<n && grid[newr][newc]==0 && ds+1<cp[newr][newc]){
                    cp[newr][newc] = ds+1;
                    q.push({1+ds,{newr,newc}});
                    if(newr==n-1 && newc==n-1){
                        return ds+1;
                    }
                }
            }
            
        }
        if(n==1){
            return 1;
        }
        return -1;
    }
};