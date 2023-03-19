class Solution {
public:
    vector<int> evenOddBit(int n) {
        string s = "";
        while(n>0){
            if(n%2==0){
                s+="0";
            }else{
                s+="1";
            }
            n/=2;
        }
        cout<<s<<endl;
        vector<int> ans = {0,0};
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                if(i%2==0){
                    ans[0]++;
                }else{
                    ans[1]++;
                }
            }
            
        }
        return ans;
        
    }
};