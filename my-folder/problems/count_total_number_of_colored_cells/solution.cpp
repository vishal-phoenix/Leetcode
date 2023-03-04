class Solution {
public:
    long long coloredCells(int n) {
        if(n==1){
            return 1;
        }
        long long x = (2*(long(n)*(long(n)-1)))+1;
        return x;
    }
};