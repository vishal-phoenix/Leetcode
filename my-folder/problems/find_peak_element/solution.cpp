class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int n =a.size();
        int l=0,h=n-1;
        if(n==1){
            return 0;
        }else if(a[0]>a[1]){
            return 0;
        }else if(a[n-1]>a[n-2]){
            return n-1;
        }else{
            while(l<=h){
                int mid = (l+h)/2;
                if(a[mid]>a[mid+1] && a[mid]>a[mid-1]){
                    return mid;
                }else if(a[mid+1]>a[mid]){
                    l = mid+1;
                }else{
                    h= mid-1;
                }
            }

        }
        return -1;
    }
};