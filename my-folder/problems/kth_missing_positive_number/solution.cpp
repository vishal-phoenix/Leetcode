class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
        int res,lft;
        int l=0,h=a.size()-1,mid;
        while(l<=h){
            mid = l+(h-l)/2;
            res = mid;
            lft = a[mid]-(mid+1);
            if(lft<k){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        int dif = k-lft;
        if(dif>0){
            return a[res]+dif;
        }else{
            return a[mid]+dif-1;
        }
    }
};