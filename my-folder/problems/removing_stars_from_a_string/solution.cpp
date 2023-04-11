class Solution {
public:
    string removeStars(string s) {
        int cnt = 0;
        string ans = "";
        int i  = s.length()-1;
        while(i>=0){
            if(s[i]=='*'){
                cnt++;
            }else if(cnt!=0){
                cnt--;
            }else{
                ans+=s[i];
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};