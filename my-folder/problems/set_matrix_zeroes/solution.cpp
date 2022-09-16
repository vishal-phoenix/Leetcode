class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        // Code here
        int n = a.size(),m = a[0].size();
        // vector<int> row;
        // vector<int> col;
        //vector<vector<int>> b(n,vector<int>(m,0));
        bool check1=false,check2=false;
        for(int i=0;i<n;i++){
            if(a[i][0]==0){
                check1=true;
                break;
            }
        }
        for(int i=0;i<m;i++){
            if(a[0][i]==0){
                check2=true;
                break;
            }
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(a[i][j]==0){
                    a[0][j] = 0;
                    a[i][0] = 0;
                }
            }
        }
        //int l = row.size(),k = col.size();
        for(int i=1;i<n;i++){
            if(a[i][0]==0){
                for(int j = 1;j<m;j++){
                    a[i][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            if(a[0][i]==0){
                for(int j = 1;j<n;j++){
                    a[j][i]=0;
                }
            }
        }
        //cout<<check1<<" "<<check2;
        if(check1){
            for(int i=0;i<n;i++){
                a[i][0]=0;
            }
        }
        if(check2){
            for(int i=0;i<m;i++){
                a[0][i]=0;
            }
        }
        return;
    }
};