class Solution {
public:
    vector<int> findColumnWidth(vector<vector<int>>& g) {
        int n = g.size(),m = g[0].size();
        // cout<<n<<" "<<m;
        vector<int> ans;
        for(int i=0;i<m;i++){
            int maxi = 0;
            for(int j=0;j<n;j++){
                int cnt = 0;
                if(g[j][i]<0){
                    cnt++;
                    g[j][i] = abs(g[j][i]);
                }
                int f ;
                if(g[j][i]==0){
                    f = 0;
                }else{
                    f = log10(g[j][i]);
                }
                cnt+=f+1;
                maxi = max(maxi,cnt);
            }
            ans.push_back(maxi);
        }
        return ans;
    }
};