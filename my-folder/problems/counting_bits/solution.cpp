class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> a(n+1,0);
        if(n==0){
            return {0};
        }
        a[1] = 1;
        for(int i=2;i<=n;i++){
            if(i%2==0){
                a[i] = a[i/2];
            }else{
                a[i] = a[i/2]+1;
            }
        }
        return a;
    }
};