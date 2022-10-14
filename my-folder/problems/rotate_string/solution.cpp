class Solution {
public:
    bool rotateString(string s, string goal) {
        bool check = false;
        int n = s.length();
        if(n==1){
            if(s[0]==goal[0]){
                return true;
            }else{
                return false;
            }
        }
        for(int i=0;i<n;i++){
            char temp = s[0];
            for(int i=0;i<n-1;i++){
                s[i] = s[i+1];
            }
            s[n-1] = temp;
            if(s==goal){
                check = true;
                break;
            }
        }
        return check;
    }
};