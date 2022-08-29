class Solution {
public:
    int fib(int n) {
        int ans=1;
        int st=0;
        if(n==0){
            return 0;
        }
        int last = 0;
        if(n==1){
            return 1;
        }
        for(int i=1;i<n;i++){
            int temp = ans;
            ans = ans+last;
            last = temp;
        }
        return ans;
    }
};