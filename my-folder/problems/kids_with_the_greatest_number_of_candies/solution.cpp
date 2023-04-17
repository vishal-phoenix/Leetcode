class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int x = INT_MIN;
        for(int i=0;i<c.size();i++){
            x = max(x,c[i]);
        }
        vector<bool> ans(c.size());
        for(int i=0;i<c.size();i++){
            if(c[i]+e>=x){
                ans[i] = true;
            }else{
                ans[i] = false;
            }
        }
        return ans;
    }
};