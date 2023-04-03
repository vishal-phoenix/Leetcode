class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> a;
        a.push_back({1});
        for(int i=1;i<=rowIndex;i++){
            vector<int> b(i+1);
            b[0] = a[i-1][0];
            b[i] = a[i-1][i-1];
            for(int j = 1;j<i;j++){
                b[j] = a[i-1][j-1]+a[i-1][j];
            }
            a.push_back(b);
        }
        vector<int> ans;
        for(int i=0;i<=rowIndex;i++){
            ans.push_back(a[rowIndex][i]);
        }
        return ans;
    }
};