class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0,ans=INT_MIN;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                cnt++;
            }else if(s[i]==')'){
                cnt--;
            }
            if(cnt<0){
                return 0;
            }
            ans = max(ans,cnt);
        }
        if(cnt!=0){
            return 0;
        }else{
            return ans;
        }
        
    }
};