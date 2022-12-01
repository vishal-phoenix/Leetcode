class Solution {
public:
    bool halvesAreAlike(string s) {
        int n = s.length();
        
        string a = s.substr(0,n/2);
        string b = s.substr(n/2,n/2);
        int cnta=0;
        for(auto it: a){
            it = tolower(it);
            cout<<it<<" ";
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
                cnta++;
            }
        }
        int cntb=0;

        for(auto it: b){
            it = tolower(it);
            if(it=='a' || it=='e' || it=='i' || it=='o' || it=='u'){
                cntb++;
            }
        }
        //cout<<a<<" "<<b;
        if(cnta==cntb){
            return true;
        }
        return false;
    }
};