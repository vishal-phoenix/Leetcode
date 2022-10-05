class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0,h=a.size()-1,mid;
        int ans;
        while(l<h){
            mid = (l+h)/2;
            if(a[mid]>=a[l]){
                if(a[h]>a[mid]){
                    h = mid-1;
                }else{
                    l = mid+1;
                }
            }else{
                if(a[h]>a[mid]){
                    h = mid;
                }else{
                    l = mid;
                }
            }
            ans = l;
        }
        return a[l];
    }
};