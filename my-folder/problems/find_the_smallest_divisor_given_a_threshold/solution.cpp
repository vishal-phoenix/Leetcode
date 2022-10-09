class Solution {
public:
    int smallestDivisor(vector<int>& a, int t) {
        int st = 1,ed=INT_MIN,mid;
        for(int i=0;i<a.size();i++){
            ed = max(ed,a[i]);
        }
        while(st<ed){
            mid = st+(ed-st)/2;
            int sum=0;
            for(int i=0;i<a.size();i++){
                if(a[i]%mid==0)  sum+=(a[i]/mid);
                else sum+= (a[i]/mid)+1;
            }
            if(sum>t){
                st = mid+1;
            }else{
                ed = mid;
            }
        }
        return st;

    }
};