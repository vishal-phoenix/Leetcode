class Solution {
public:
    int splitArray(vector<int>& a, int k) {
        int n = a.size();
        int l=INT_MAX,h=0,mid,res;
        if(k>n){
            return -1;
        }
        for(int i=0;i<n;i++){
            l = min(l,a[i]);
            h+=a[i];
        }
        while(l<=h){
            mid = l+(h-l)/2;
            int sum=0,cnt=1;
            bool check = true;
            for(int i=0;i<n;i++){
                sum+=a[i];
                if(sum>mid){
                    cnt++;
                    sum = a[i];
                }
                if(cnt>k){
                    check = false;
                    break;
                }
                if(sum>mid){
                    check = false;
                    break;
                }
            }
            if(check){
                res = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return res;
    }
};