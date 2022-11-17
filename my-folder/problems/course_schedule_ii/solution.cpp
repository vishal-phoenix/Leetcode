class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& prerequisites) {
        vector<int> adj[n];
        for(auto it:prerequisites){
            adj[it[1]].push_back(it[0]);
        }
        queue<int> q;
        vector<int> ans;
        vector<int> a(n,0);
        for(int i=0;i<n;i++){
            for(auto it: adj[i]){
                a[it]++;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for(auto it : adj[x]){
                a[it]--;
                if(a[it]==0){
                    q.push(it);
                }
            }
        }
        vector<int> j;
        if(ans.size()==n){
            return ans;
        }else{
            return j;
        }
        

    }
};