class Solution {
public:
    int minDays(vector<int>& b, int m, int k) {
        int n = b.size();
        if((m*k)>n){
            return -1;
        }
        int ed = INT_MIN;
        for(int i=0;i<n;i++){
            ed = max(ed,b[i]);
        }
        int st = 1 , mid,curr,cnt,maxi=INT_MIN;

        while(st<ed){
            mid = st+(ed-st)/2;
            curr=0;cnt=0;
            for(int i=0;i<n;i++){
                int z;
                if(b[i]%mid==0) z = b[i]/mid;
                else z = (b[i]/mid)+1;
                if(z<=1){
                    curr++;
                }else{
                    curr=0;
                }
                if(curr>=k){
                    cnt++;
                    curr=0;
                }
            }
            cout<<cnt<<endl;
            maxi = max(maxi,cnt);
            if(cnt>=m){
                ed = mid;
            }else{
                st = mid+1;
            }

        }
        mid = st+(ed-st)/2;
        curr=0;cnt=0;
        for(int i=0;i<n;i++){
            int z;
            if(b[i]%mid==0) z = b[i]/mid;
            else z = (b[i]/mid)+1;
            if(z<=1){
                curr++;
            }else{
                curr=0;
            }
            if(curr>=k){
                cnt++;
                curr=0;
            }
        }
        //cout<<cnt<<endl;
        maxi = max(maxi,cnt);
        if(maxi>=m){
            return st;
        }else{
            return -1;
        }
    }
};