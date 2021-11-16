class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int l=1, r=n*m;
        int ans = 0;
        while(l<=r){
            int mid = l+(r-l)/2;
            int cnt=0;
            for(int i=1;i<=m;i++){
                cnt+=min(mid/i,n);
                
            }
            if(cnt>=k){
                ans=mid;r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return ans;
    }
};