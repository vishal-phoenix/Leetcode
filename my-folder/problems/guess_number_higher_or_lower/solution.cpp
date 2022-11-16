/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long l = 1 , u = (long long)n;
        int ans = guess(n);
        while(ans!=0){
            if(ans == -1){
                u = (long long)n;
                n = ((long long)n+l)/2;
                ans = guess(n);
            }else if(ans == 1){
                l = (long long)n;
                n = ((long long)n+u)/2;
                ans = guess(n);
            }
        }
        return n;
    }
};