class Solution {
public:
    int beautySum(string s) {
        
        int res = 0;
        int maxi = INT_MIN,mini = INT_MAX;
        for(int i=0;i<s.length();i++){
            
            unordered_map<char,int> mp;
            for(int j =i;j<s.length();j++){
                mp[s[j]]++;
                maxi = INT_MIN;mini = INT_MAX;
                for(auto it:mp){
                    maxi = max(maxi,it.second);
                    mini = min(mini,it.second);
                }
                res+=maxi-mini;
            }
        }
        return res;
    }
};