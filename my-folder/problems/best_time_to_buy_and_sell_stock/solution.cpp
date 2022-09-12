class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int maxi = 0,mini = p[0];
        for(int i = 1;i<n;i++){
            if(p[i]>mini){
                int x = p[i]-mini;
                maxi = max(maxi,x);
            }else if(p[i]<mini){
                mini = p[i];
            }
        }
        return maxi;
    }
};