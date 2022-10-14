class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mp2.find(s[i])==mp2.end() || mp1[s[i]]!=mp2[s[i]]){
                return false;
            }
        }
        return true;
    }
};