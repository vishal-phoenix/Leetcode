class Solution {
public:
    int reverse(int n) {
        long long ans = 0;
        if(n>0){
            while(n>0){
                int x = n%10;
                 if(ans*10>INT_MAX){
                    return 0;
                }
                ans = (ans*10)+x;
                n = n/10;
            }
        }else{
            int z = abs(n);
            while(z>0){
                int x = z%10;
                if(ans*10>INT_MAX){
                    return 0;
                }
                ans = (ans*10)+x;
                z = z/10;
            }
            ans = -ans;
        }
        
        return ans;
    }
};