class Solution {
public:
    vector<int> twoSum(vector<int>& a, int t) {
        unordered_map<int,int> mp;
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        int b=-1,c=-1;
        for(auto it:mp){
            int x = it.first;
            int y = it.second;
            int z = t-it.first;
            if(mp.find(z)!=mp.end()){
                if(z==it.first && it.second>=2){
                    b = x;c = z;
                    break;
                }else if(z!=it.first){
                    b = x;
                    c = z;
                    break;
                }
            }
            if(b!=-1){
                break;
            }
        }
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            if(a[i]==b){
                ans.push_back(i);
            }
            else if(a[i]==c){
                ans.push_back(i);
            }
        }
        return ans;
    }
};