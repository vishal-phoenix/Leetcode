class Solution {
public:
    double helper(double x,double z,int n){
        if(n==0){
            return x;
        }
        return helper(x*z,z,n-1);
    }
    double myPow(double x, int n) {
        if(n==0 || x==1){
            return 1;
        }
        if(x==-1){
            if(n%2==0){
                return 1;
            }else{
                return -1;
            }
        }
        double z;
        if(n>0){
            z = x;
            n = n-1;
        }else if(n<0){
            z = 1/x;
            x = 1/x;
            n = 0-(n+1);
            if(n>100000000){
                return 0;
            }
        }
        
        double ans = helper(x,z,n);
        return ans;

    }
};