class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& a) {
        vector<long long> ans(a.size());
        int maxi = a[0];
        ans[0] = 2*a[0];
        for(int i=1;i<a.size();i++){
            maxi = max(maxi,a[i]);
            long long z = long(a[i])+long(maxi);
            ans[i] = ans[i-1]+z;
        }
        return ans;
        
    }
};