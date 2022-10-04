class Solution {
public:
    int search(vector<int>& a, int t) {
        int n = a.size();
        int l,h;
        int k;
        int pos = -1;
        if(n==1){
            if(t==a[0]){
                return 0;
            }else{
                return -1;
            }
        }
        
        if(a[n-1]>a[n-2] && a[n-1]>a[0]){
            l = 0;h=n-1;
        }else if(a[n-1]<a[n-2] && a[n-1]<a[0]){
            if(t==a[n-1]){
                return n-1;
            }else{
                l=0;h=n-2;
            }
        }else if(a[n-1]>a[n-2] && a[n-1]<a[0]){
            int st=0,ed=n-1;
            while(st<ed){
                int mid=(st+ed)/2;
                if(a[mid]<a[n-1]){
                    ed=mid;
                }else if(a[mid]>a[n-1]){
                    st=mid+1;
                }
            }
            k = st;
            if(a[n-1]<t){
                l =0;
                h = st-1;
            }else{
                l = st;
                h = n-1;
            }
        }
        
        while(l<=h){
            int mid = (l+h)/2;
            if(a[mid]==t){
                return mid;
            }else if(a[mid]>t){
                h = mid-1;
            }else{
                l = mid+1;
            }
        }
        return pos;
    }
};