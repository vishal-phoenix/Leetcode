class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& f, int src, int dst, int k) {
        vector<int> ans(n,INT_MAX);
        vector<pair<int,int>> adj[n];
        for(auto it:f){
            
            adj[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<int,pair<int,int>>> pq;
        pq.push({0,{src,0}});
        ans[src] = 0;
        while(!pq.empty()){
            int stp = pq.front().first;
            int x = pq.front().second.first;
            int d = pq.front().second.second;
            pq.pop();
            if(stp>k){
                continue;
            }
            for(auto it:adj[x]){
                int adjnode = it.first;
                int cst = it.second;
                if(cst+d<ans[adjnode] && stp<=k){
                    ans[adjnode] = cst+d;
                    pq.push({stp+1,{adjnode,cst+d}});
                }                
            }
        }
        if(ans[dst]==INT_MAX){
            return -1;
        }
        return ans[dst];
    }
};