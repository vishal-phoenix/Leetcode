class Solution {
public:
    int search(vector<int>& a, int t) {
        // int n = a.size();
        int l=0,h=a.size()-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(a[mid]==t){
                return mid;
            }else if (a[mid]<t){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }
        return -1;
    }
};