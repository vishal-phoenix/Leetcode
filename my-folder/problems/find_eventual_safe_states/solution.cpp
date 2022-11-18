class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<vector<int>> g(n);
        for(int i=0;i<n;i++){
            if(graph[i].size()>0){
                for(auto it:graph[i]){
                    g[it].push_back(i);
                }
            }
            
        }
        vector<int> ans;
        vector<int> a(n);
        queue<int> q;
        for(int i=0;i<n;i++){
            for(auto it:g[i]){
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
            for(auto it:g[x]){
                a[it]--;
                if(a[it]==0){
                    q.push(it);
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};