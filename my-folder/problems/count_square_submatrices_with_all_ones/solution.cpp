class Solution {
public:
    int countSquares(vector<vector<int>>& m) {
        vector<vector<int>> a(m.size(),vector<int>(m[0].size()));
        for(int i=0;i<m[0].size();i++){
            a[0][i] = m[0][i];
        }
        for(int i=0;i<m.size();i++){
            a[i][0] = m[i][0];
        }
        for(int i=1;i<m.size();i++){
            for(int j=1;j<m[0].size();j++){
                if(m[i][j]==0){
                    a[i][j] = 0;
                    continue;
                }
                int g = min(a[i-1][j],min(a[i][j-1],a[i-1][j-1]));
                // cout<<g<<" ";
                a[i][j] = 1+g;
            }
            // cout<<endl;
        }
        int sum=0;
        // for(int i=0;i<m.size();i++){
        //     for(int j=0;j<m[0].size();j++){
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                sum+=a[i][j];
            }
        }
        return sum;
    }

};