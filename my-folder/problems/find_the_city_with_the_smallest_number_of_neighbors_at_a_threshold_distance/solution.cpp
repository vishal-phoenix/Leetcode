class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int dT) {
        int m = edges.size();
        vector<vector<int>> ans(n,vector<int>(n,-1));
        for(int i=0;i<m;i++){
            int sr = edges[i][0],ds = edges[i][1],we = edges[i][2];
            ans[sr][ds] = we;
            ans[ds][sr] = we;
        }
        for(int i=0;i<n;i++){
            ans[i][i] = 0;
        }
        for(int via=0;via<n;via++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(ans[i][j] == -1){
                        if(ans[i][via]>=0 && ans[via][j]>=0){
                            ans[i][j] = ans[i][via]+ans[via][j];
                        }
                    }else{
                        if(ans[i][via]>=0 && ans[via][j]>=0){
                            ans[i][j] = min(ans[i][via]+ans[via][j],ans[i][j]);
                        }
                    }
                }
            }
        }
        int ct;
        int cnt=0;
        int as = INT_MAX;
        for(int i=0;i<n;i++){
            cnt = 0;
            for(int j=0;j<n;j++){
                if(ans[j][i]>0 && ans[j][i]<=dT){
                    cnt++;
                }
            }
            if(cnt<=as){
                ct = i;
                as = cnt;
            }
        }
        return ct;
    }
};