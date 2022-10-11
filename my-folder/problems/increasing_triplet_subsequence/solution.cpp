class Solution {
public:
    bool increasingTriplet(vector<int>& a) {
        int cnt1=INT_MAX,cnt2=INT_MAX;
        for(int i=0;i<a.size();i++){
            if(a[i]<cnt1) cnt1= a[i];
            else if(a[i]>cnt1 && a[i]<cnt2) cnt2= a[i];
            else if(a[i]>cnt2) return true;
        }
        return false;
    }
};