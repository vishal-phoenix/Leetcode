class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mp;
        unordered_set<int> st;
        for(auto it: arr){
            mp[it]++;
        }
        for(auto it: mp){
            st.insert(it.second);
        }
        cout<<st.size();
        if(st.size()==mp.size()){
            return true;
        }
        return false;
    }
};