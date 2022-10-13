class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        bool check = false;
        int pos;
        for(int i=n-1;i>=0;i--){
            int x = num[i]-'0';
            if(x%2!=0){
                pos = i;
                check = true;
                break;
            }
        }
        string ans = "";
        if(check){
            ans = num.substr(0,pos+1);
            return ans;
        }else{
            return ans;
        }
    }
};