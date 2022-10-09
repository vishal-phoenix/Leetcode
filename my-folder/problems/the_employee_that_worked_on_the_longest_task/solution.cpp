class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& l) {
        int m = l.size();
        int maxi = l[0][1];
        
        int ans = l[0][0];
        if(n==1){
            return ans;
        }
        for(int i=1;i<m;i++){
            int sub = l[i][1]-l[i-1][1];
            if(sub>maxi){
                maxi = sub;
                ans = l[i][0];
            }else if(sub==maxi){
                if(l[i][0]<ans){
                    ans = l[i][0];
                }
            }
        }
        return ans;
    }
};