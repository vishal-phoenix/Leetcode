class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> adj[n];
        for(int i=0;i<edges.size();i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vs(n,0);
        queue<int> q;
        q.push(source);
        bool check = false;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            vs[x] = 1;
            if(x==destination){
                check = true;
                break;
            }
            for(auto it:adj[x]){
                if(vs[it]==0){
                    q.push(it);
                }
            }
        }
        return check;

    }
};