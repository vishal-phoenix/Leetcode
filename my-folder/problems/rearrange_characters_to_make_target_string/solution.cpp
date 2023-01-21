class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        int ans = INT_MAX;
        unordered_map<char,int> mp1;
        for(int i=0;i<t.length();i++){
            mp1[t[i]]++;
        }
        for(auto it:mp1){
            ans = min(ans,mp[it.first]/it.second);
        }
        return ans;
    }
};