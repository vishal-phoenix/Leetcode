class Solution {
public:
    int searchInsert(vector<int>& a, int t) {
        int l =0,h=a.size()-1;
        int pos;
        while(l<=h){
            int mid = (l+h)/2;
            if (a[mid]==t){
                pos = mid;
                break;
            }else if(a[mid]<t){
                l = mid+1;
                pos = mid+1;
            }else{
                h = mid-1;
                pos = mid;
            }
        }
        return pos;
    }
};