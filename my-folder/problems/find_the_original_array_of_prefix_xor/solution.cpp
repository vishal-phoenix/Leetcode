class Solution {
public:
    vector<int> findArray(vector<int>& p) {
        int n = p.size();
        vector<int> ans(n);
        ans[0] = p[0];
        if(n==1){
            return ans;
        }
        for(int i=1;i<n;i++){
            ans[i] = p[i]^p[i-1];
        }
        return ans;
    }
};