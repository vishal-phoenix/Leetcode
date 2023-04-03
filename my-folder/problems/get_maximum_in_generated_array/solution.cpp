class Solution {
public:
    int getMaximumGenerated(int n) {
        int maxi = 1;
        vector<int> a;
        if(n==0){
            return 0;
        }
        a.push_back(0);
        a.push_back(1);
        for(int i=2;i<=n;i++){
            if(i%2==0){
                
                a.push_back(a[i/2]);
            }else{
                a.push_back(a[i/2]+a[(i/2)+1]);
            }
            maxi = max(maxi,a[i]);
        }

        return maxi;
    }
};