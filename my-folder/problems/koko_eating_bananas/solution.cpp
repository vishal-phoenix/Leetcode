class Solution {
public:
    
    int minEatingSpeed(vector<int>& p, int h) {
        int n = p.size();
        sort(p.begin(),p.end());
        int st = 1;
        int ed = p[n-1];
        int mid;
        while(st<ed){
            mid = st+(ed-st)/2;
            //cout<<mid<<endl;
            int sum = 0;
            for(int i=0;i<n;i++){
                if(p[i]%mid==0) sum+=p[i]/mid;
                else sum+=(p[i]/mid)+1;
            }
            if(sum>h){
                st = mid+1;
            }else{
                ed = mid;
            }
        }
        return st;
    }
};