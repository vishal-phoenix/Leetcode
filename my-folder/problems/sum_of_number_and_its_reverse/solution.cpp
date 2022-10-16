class Solution {
public:
    int revrse(int i){
        // int k = log10(i)+1;
        int ans = 0;
        while(i>0){
            int g = i%10;
            ans = (ans*10) + g;
            i/= 10;
        }
        return ans;
    }
    bool sumOfNumberAndReverse(int num) {
        for(int i=0;i<=num;i++){
            int j = revrse(i);
            if(i+j==num){
                return true;
            }
        }
        return false;
    }
};