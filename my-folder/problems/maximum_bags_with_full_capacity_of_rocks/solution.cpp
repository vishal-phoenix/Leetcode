class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int ans=0;
        vector<int>add;
        for(int i=0;i<rocks.size();i++) {
            add.push_back(capacity[i]-rocks[i]);
        }
        sort(add.begin(), add.end());
        for(auto ele : add) {
            if(ele > 0 and additionalRocks >= ele) {
                ans++;
                additionalRocks-=ele;
            }
            else if(ele==0)
                ans++;
            else
                break;
        }
        return ans;
    }
};