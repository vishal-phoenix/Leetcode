class Solution {
public:
    long int gcd(long int a,long int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }

    int subarrayLCM(vector<int>& nums, int k) {
        long int lc;
        
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            lc=(long int)nums[i];
            for(int j=i+1;j<nums.size();j++){
                lc = (((nums[j]*lc))/gcd((long int)nums[j],lc));
                if(lc>k){
                    break;
                }
                //cout<<lc<<" ";
                if((int)lc==k){
                    cnt++;
                }
            }
            
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k){
                cnt++;
            }
        }
        return cnt;
    }
};