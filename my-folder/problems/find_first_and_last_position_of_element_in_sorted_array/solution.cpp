class Solution {
public:
    vector<int> searchRange(vector<int>& a, int t) {
        vector<int> ans(2,-1);
        int l=0,h=a.size()-1,mid;
        while(l<=h){
            mid = (l+h)/2;
            if(a[mid]==t){
                ans[0]=mid;
                h=mid-1;
            }else if(a[mid]<t){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        l=0;h=a.size()-1;
        while(l<=h){
            mid = (l+h)/2;
            if(a[mid]==t){
                ans[1]=mid;
                l = mid+1;
            }else if(a[mid]<t){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return ans;
    }
};