class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& m) {
        int n = m.size();
        map<int,int> mp;
        map<int,int> mp1;
        for(auto it: m){
            mp[it[0]]++;
            mp[it[1]]--;
            mp1[it[0]]++;
            mp1[it[1]]++;
        }
        vector<int> ans0;
        vector<int> ans1;
        for(auto it:mp){
            if(mp1[it.first]-it.second==0){
                ans0.push_back(it.first);
            }else if(float(mp1[it.first]-it.second)/2==1){
                ans1.push_back(it.first);
            }
        }
        vector<vector<int>> ans;
        ans.emplace_back(ans0);
        ans.emplace_back(ans1);
        return ans;
    }
};