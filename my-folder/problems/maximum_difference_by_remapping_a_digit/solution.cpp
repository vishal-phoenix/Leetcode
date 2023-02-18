class Solution {
public:
    int minMaxDifference(int num) {
        int d = num;
        string s = to_string(num);
        string f = s;
        char c  = -1;
        for(int i=0;i<s.length();i++){
            if(s[i]!='9'){
                c = s[i];
                break;
            }
        }
        if(c==-1){
            c == '9';
        }
        //cout<<s<<" "<<f<<endl;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                s[i] = '9';
            }
        }
        c = f[0];
        for(int i=0;i<f.length();i++){
            if(f[i]==c){
                f[i] = '0';
            }
        }
        //cout<<s<<" "<<f<<endl;
        int maxi = 0;
        for(int i=0;i<s.length();i++){
            int z = s[i]-'0';
            //cout<<z<<" ";
            maxi = (maxi*10)+z;
        }
        //cout<<endl;
        int mini = 0;
        bool ch = false;
        for(int i=0;i<f.length();i++){
            if(f[i]!='0'){
                ch = true;
            }
            if(ch){
                mini = (mini*10)+(f[i]-'0');
            }
        }
        //cout<<maxi<<" "<<mini<<endl;
        return maxi-mini;
    }
};