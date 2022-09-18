class Solution {
public:
    int longestContinuousSubstring(string s) {
        int maxi = 0;
        int cnt = 1;
        int n = s.length();
        if(n==0 || n==1){
            return n;
        }
        for(int i=1;i<n;i++){
            if(s[i]-s[i-1]==1){
                cnt++;
            }else{
                cnt = 1;
            }
            maxi = max(maxi,cnt);
        }
        return maxi;
    }
};