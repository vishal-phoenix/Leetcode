class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        int n = mat.size(),m = mat[0].size();
        vector<vector<int>> ans(n,vector<int>(m,0));
        for(int i=0;i<m;i++){
            int st = 0,ed=i;
            vector<int> a;
            for(int j=0;j<n;j++){
                if(st<n && ed<m){
                    a.push_back(mat[st][ed]);
                    st++;
                    ed++;
                }else{
                    break;
                }
            }
            sort(a.begin(),a.end());
            st=0;ed=i;
            for(int j=0;j<m;j++){
                if(st<n && ed<m){
                    ans[st][ed] = a[j];
                    ed++;
                    st++;
                }else{
                    break;
                }
            }
        }
        for(int i=1;i<n;i++){
            int st = i,ed=0;
            vector<int> a;
            for(int j=1;j<n;j++){
                if(st<n && ed<m){
                    a.push_back(mat[st][ed]);
                    st++;
                    ed++;
                }else{
                    break;
                }
            }
            sort(a.begin(),a.end());
            st=i;ed=0;
            for(int j=1;j<n;j++){
                if(st<n && ed<m){
                    ans[st][ed] = a[ed];
                    ed++;
                    st++;
                }else{
                    break;
                }
            }
        }
        return ans;
        
    }
};