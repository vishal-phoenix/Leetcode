class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it:times){
            adj[it[0]-1].push_back({it[1]-1,it[2]});
        }
        vector<int> ds(n,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,k-1});
        ds[k-1] = 0;
        while(!pq.empty()){
            int tm = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto it:adj[node]){
                if(tm+it.second<ds[it.first]){
                    ds[it.first] = tm+it.second;
                    pq.push({tm+it.second,it.first});
                }
            }
        }
        sort(ds.begin(),ds.end());
        if(ds[n-1]==INT_MAX){
            return -1;
        }
        return ds[n-1];
    }
};