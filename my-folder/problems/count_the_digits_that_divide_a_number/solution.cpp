class Solution {
public:
    int countDigits(int n) {
        int sum = 0;
        int m = n;
        unordered_map<int,int> mp;
        while(m>0){
            int x = m%10;
            m/=10;
            mp[x]++;
        }
        for(auto it:mp){
            if(it.first!=0 && n%it.first==0){
                sum+=it.second;
            }
        }
        return sum;
    }
};