class Solution {
public:
    int op1[4]={1,-1,0,0},op2[4]={0,0,1,-1};
    int dfs(int i,int j,int n, int m, vector<vector<int>>& a){
        if(i>= 0 && i<n && j>=0 && j<m && a[i][j] != -1){
            if(a[i][j]==2){
                for (int i=0;i<n;i++){
                    for (int j=0;j<m;j++){
                        if(a[i][j]==0)
                            return 0;
                    }
                }
                return 1;
            }
            int totl =0 ;
            auto temp = a[i][j];
            a[i][j] = -1;
            for(int k=0;k<4;k++){
                totl+=dfs(i+op1[k],j+op2[k],n,m,a);
            }
            a[i][j] = temp;
            return totl;
        }
        else{
            return 0;
        }
        
    }
    int uniquePathsIII(vector<vector<int>>& a) {
        int n=a.size(),m=a[0].size();
        for(int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(a[i][j]==1){
                    int ans = dfs(i,j,n,m,a);
                    return ans;
                }
            }
        }
        return 0;
    }
};