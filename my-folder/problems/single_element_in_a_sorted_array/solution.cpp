class Solution {
public:
    int singleNonDuplicate(vector<int>& a) {
        int l=0,h=a.size()-2;
        
        while(l<=h){
            int mid = (l+h)/2;
            if(a[mid]==a[mid^1]){
                l = mid+1;
            }else{
                h = mid-1;
            }
        }

        return a[l];
    }
};