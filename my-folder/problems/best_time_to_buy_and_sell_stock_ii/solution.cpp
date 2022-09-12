class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size();
        int maxi = 0,mini = p[0], ans=0;
        for(int i = 1;i<n;i++){
            int x=0;
            if(p[i]>mini && p[i]>=p[i-1] && i==n-1){
                x = p[i]-mini;
                
            }else if(p[i]>=mini && p[i]<p[i-1]){
                x = p[i-1]-mini;
                mini = p[i];
            }else if(p[i]<mini ){
                x = p[i-1]-mini;
                mini = p[i];
            }
            //cout<<x<<" ";
            ans += x;
            
        }
        //cout<<endl;
        return ans;
    }
};