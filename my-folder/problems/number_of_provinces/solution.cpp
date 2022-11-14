class Solution {
public:
    int n;
    void dfs(int node,vector<vector<int>>& isConnected,vector<int>& vs){
        vs[node] = 1;
        for(int i=0;i<n;i++){
            if(isConnected[node][i]==1 && vs[i]==0){
                dfs(i,isConnected,vs);
            }
        }
        return;
    }

    int findCircleNum(vector<vector<int>>& isConnected){
        n = isConnected.size();
        vector<int> vs(n,0);
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(!vs[i]){
                cnt++;
                dfs(i,isConnected,vs);
            }
        }
        return cnt;
    }
};