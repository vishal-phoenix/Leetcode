class Solution {
public:
    bool search(vector<int>& a, int t) {
        int l =0,h=a.size()-1,mid;
        if(a.size()==1){
            if(a[0]==t){
                return 1;
            }else{
                return 0;
            }
        }
        while(l<=h ){
            mid = (l+h)/2;
            if(a[mid]==t){
                return 1;
            }else if(a[l]==a[mid] && a[mid]==a[h]){
                l++;h--;
            }else if(a[l]<=a[mid]){
                if(t<a[mid] && t>=a[l]){
                    h=mid-1;
                }else{
                    l = mid+1;
                }
            
            }else {
                if((a[mid] < t) && (a[h]>= t))
                    l = mid + 1;
                else
                    h = mid - 1;
            }
        }
        return 0;
    }
};