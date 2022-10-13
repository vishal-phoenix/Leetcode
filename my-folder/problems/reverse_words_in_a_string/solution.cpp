class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "",t = "";
        int st,ed;
        for(int i=0;i<n;i++){
            if(iswalnum(s[i])){
                st = i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(iswalnum(s[i])){
                ed = i;
                break;
            }
        }
        int i = ed;
        bool check;
        while(i>=st){
            // string t = "";
            
            if(iswalnum(s[i])){
                t+=s[i];
                check = true;
            }else if(check){
                reverse(t.begin(),t.end());
                ans+=t+" ";
                t = "";
                check = false;
            }
            i--;
        }
        if(t!=" "){
            reverse(t.begin(),t.end());
            ans+=t;
        }
        
        return ans;
    }
};