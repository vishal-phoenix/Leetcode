class Solution {
public:
    bool dfs(int i,vector<int>& vs,vector<vector<int>>& graph, int curr){
        vs[i] = curr;
        //cout<<i<<" "<<vs[i]<<" "<<curr<<"\n";
        for(auto it:graph[i]){
            if(vs[it]==-1){
                if(dfs(it,vs,graph,1-curr)==false) return false;
            }else if(vs[it]==curr){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> vs(n,-1);
        for(int i=0;i<n;i++){
            if(vs[i]==-1){
                if(dfs(i,vs,graph,0)==false) return false;
            }
        }
        return true;
    }
};