class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size();
        int ans = (n*(n+1))/2;
        for(int i=0;i<n;i++){
            ans -= a[i];
        }
        return ans;
    }
};