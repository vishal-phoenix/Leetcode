class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        vector<vector<int>> ans;
        vector<int> temp(2);
        temp[0] = a[0][0];
        temp[1] = a[0][1];
        ans.push_back(temp);
        if(n==1){
            return ans;
        }else{
            for(int i=1;i<n;i++){
                if(ans.back()[1]<a[i][0]){
                    temp[0] = a[i][0];
                    temp[1] = a[i][1];
                    ans.push_back(temp);
                }else{
                    ans.back()[1] = max(ans.back()[1],a[i][1]);
                }
            }
        }
        return ans;
    }
};