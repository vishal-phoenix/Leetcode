class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& h) {
        int n = h.size(),m = h[0].size();
        vector<vector<int>> cp(n,(vector<int>(m,INT_MAX)));
        cp[0][0] = 0;
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        vector<int> dr = {-1,0,1,0};
        vector<int> dc = {0,1,0,-1};
        while(!pq.empty()){
            int ds = pq.top().first;
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            pq.pop();
            if(row==n-1 && col == m-1){
                return ds;
            }
            for(int i=0;i<4;i++){
                int newr = row+dr[i];
                int newc = col+dc[i];
                if(newr>=0 && newr<n && newc>=0 &&  newc<m ){
                    int neweffort = max(abs(h[row][col]-h[newr][newc]),ds);
                    if(neweffort<cp[newr][newc]){
                        cp[newr][newc] = neweffort;
                        pq.push({neweffort,{newr,newc}});
                    }
                    
                    
                }
            }
        }
        return 0;

    }
};