class Solution {
public:
    int dp[5001][2];
    int solve(vector<int>&prices,int status,int idx){
        int buyThis=0,notBuy=0;
        if(idx>=prices.size()) return 0;
        if(dp[idx][status]!=-1) return dp[idx][status];
//         I  don't want to buy this stock
        notBuy=solve(prices,status,idx+1);
        if(status==0){
//            I want to buy this stock 
            buyThis=-prices[idx]+solve(prices,1,idx+1);
        }else if(status==1){
            
//             if I have bought  stock then left with two option 
//             first - I don't want to sell this stock on current day so move to next day
//             second - I want to sell stock ,so sell and move to 2 days ahead
               
               int first=solve(prices,status,idx+1);
               int second=prices[idx]+solve(prices,0,idx+2);
               buyThis=max(first,second);
        }
        return dp[idx][status]=max(notBuy,buyThis);
        
    }
    int maxProfit(vector<int>& prices) {
          memset(dp,-1,sizeof(dp));
          // 0 means I want to buy this stock
          // 1 means I have already bought this stock
          return solve(prices,0,0);
    }
};