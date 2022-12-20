class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            for(auto it:rooms[i]){
                adj[i].push_back(it);
            }
        }
        queue<int> q;
        q.push(0);
        vector<int> vs(n,0);
        vs[0] = 1;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            vs[x] = 1;
            for(auto it:adj[x]){
                if(vs[it]!=1){
                    q.push(it);
                }
            }
        }
        for(int i=0;i<n;i++){
            if(vs[i]==0){
                return false;
            }
        }
        return true;
    }
};