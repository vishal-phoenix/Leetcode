class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n = s.size();
        if(n==1){
            return s[0];
        }else{
            string t = s[0];
            for(int i = 1;i<n;i++){
                string f = s[i];
                int x = min(f.length(),t.length());
                for(int j = 0;j<x;j++){
                    if(t[j]!=f[j]){
                        t = f.substr(0,j);
                        break;
                    }
                }
                t = t.substr(0,x);
                if(t==""){
                    return t;
                }
            }
            return t;
        }
    }
};