class Solution {
public:
    int minCost(string c, vector<int>& ne) {
        int n = c.length();
        int cnt=0;
        int maxi=ne[0];
        int sum=ne[0];
        
        for(int i=1;i<n;i++){

            //cout<<maxi<<" "<<sum<<endl;
            if(c[i]==c[i-1]){
                sum += ne[i];
                maxi = max(ne[i],maxi);
            }else{
                sum-=maxi;
                cnt+=sum;
                sum=ne[i];
                maxi = ne[i];
            }
        }
        cnt+= sum-maxi;
        return cnt;
    }
};