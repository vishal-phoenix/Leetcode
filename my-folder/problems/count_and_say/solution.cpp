class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int k=1;k<n;k++){
            int i=0,j=0;
            string t = "";
            while(j<s.length()){
                int cnt  = 0;
                while(j<s.length() && s[i]==s[j]){
                    cnt++;
                    j++;
                }
                string num = to_string(cnt);
                num+=s[i];
                t+=num;
                i=j;
            }
            s = t;
        }
        return s;
    }
};