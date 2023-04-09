class Solution {
public:
    bool prime(int n) {
      bool is_prime = true;

      // 0 and 1 are not prime numbers
      if (n == 0 || n == 1) {
        is_prime = false;
      }

      for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
          is_prime = false;
          break;
        }
      }

      return is_prime;
    }
    
    int diagonalPrime(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        set<int> st;
        int i=0,j=0;
        int maxi = 1;
        while(i<n){
            if(a[i][j]>maxi){
                if(prime(a[i][j])){
                    maxi = a[i][j];
                }
            }
            i++;j++;
        }
        i=n-1;j=0;
        while(j<n){
            if(a[i][j]>maxi){
                if(prime(a[i][j])){
                    maxi = a[i][j];
                }
            }
            i--;j++;
        }
        
        if(maxi==1){
            return 0;
        }
        return maxi;
        
        
    }
};