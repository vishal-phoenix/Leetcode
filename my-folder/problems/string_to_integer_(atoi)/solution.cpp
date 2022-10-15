class Solution {
public:
    int myAtoi(string s) {
        string t = "";
        int i=0;
        bool check = false;
        while(i<s.length()){
            if((s[i]=='-' || s[i]=='+') && t.length()==0 ){
                t+=s[i];
                i++;
                continue;
            }
            if(s[i]==' ' && t.length()==0){
                i++;
                continue;
            }
            if(s[i]>='0' && s[i]<='9'){
                while(s[i]>='0' && s[i]<='9'){
                    t+=s[i];
                    i++;
                }
                check = true;
            }else{
                break;
            }
            if(check){
                break;
            }
            i++;
        }
        long long ans = 0;
        cout<<t;
        for(int i=0;i<t.length();i++){
            if(t[i]!='-' && t[i]!='+'){
            ans  = (ans*10)+(t[i]-'0');
            }
            if(ans>INT_MAX){
                if(t[0] == '-'){
                    ans = INT_MIN;
                    break;
                }else{
                    ans = INT_MAX;
                    break;
                }
            }
        }
        if(t[0]=='-'){
            if(ans!=INT_MAX || ans!=INT_MIN){
                return (int)(0-ans);
            }
        }
        return (int)ans;
    }
};