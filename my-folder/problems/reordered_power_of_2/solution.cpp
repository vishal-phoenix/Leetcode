class Solution {
public:
    string sortstr(int n){
        string s = to_string(n);
        sort(s.begin(),s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string s = sortstr(n);
        for(int i=0;i<30;i++){
            string t = sortstr(1<<i);
            if(t==s){
            return true;
            }
        }
        
        return false;
    }
   
};