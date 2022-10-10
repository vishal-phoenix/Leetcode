class Solution {
public:
    int helper(int mid,vector<int>& w){
        int sum=0,cnt=0;
        for(int i=0;i<w.size();i++){
            sum+=w[i];
            if(sum>mid){
                sum = w[i];
                cnt++;
            }
        }
        cnt++;
        return cnt;
    }
    int shipWithinDays(vector<int>& w, int d) {
        int h = 0,l=INT_MIN;
        for(int i=0;i<w.size();i++){
            h += w[i];
            l = max(w[i],l);
        }
        int mid,result;
        while(l<=h){
            mid = l+(h-l)/2;
            int cnt = helper(mid,w);
            if(cnt<=d){
                result = mid;
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return result;
    }
};