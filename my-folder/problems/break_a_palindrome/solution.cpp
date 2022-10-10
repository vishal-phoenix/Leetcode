class Solution {
public:
    string breakPalindrome(string p) {
        string ans = "";
        if(p.length()==1){
            return ans;
        }
        int pos = 0;
        int n = p.length();
        if(n%2!=0){
            for(int i=0;i<(p.length()-1)/2;i++){
                if(p[i]!='a'){
                    p[i] = 'a';
                    pos = 1;
                    break;
                }
            }
        }else{
            for(int i=0;i<p.length();i++){
                if(p[i]!='a'){
                    p[i] = 'a';
                    pos = 1;
                    break;
                }
            }
        }
        
        
        if(pos){
            ans = p;
            return ans;
        }else{
            p[p.length()-1] = 'b';
            ans = p;
            return ans;
        }
    }
};