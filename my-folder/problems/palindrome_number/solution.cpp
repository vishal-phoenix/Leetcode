class Solution {
public:
    int reverses(int x){
        long long y = 0;
        while(x>0){
            int z = x%10;
            y = (y*10)+z;
            x = x/10;
        }
        int k = y; 
        return k;
    }
    bool isPalindrome(int x) {
        int y = x;
        x = reverses(x);
        if(y!=x) return false;
        return true;
    }
};