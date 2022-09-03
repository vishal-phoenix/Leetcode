class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int n = a.size();
        if(n==1){
            return 1;
        }
        int res = 1;
        for(int i=1;i<n;i++){
            if(a[res-1]!=a[i]){
                a[res] = a[i];
                res++;
            }
        }
        return res;
    }
};