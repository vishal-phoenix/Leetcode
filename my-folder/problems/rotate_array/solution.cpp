class Solution {
public:
    
    void reversea(vector<int> &a,int st,int ed){
        while(st<=ed){
            int temp = a[st];
            a[st] = a[ed];
            a[ed] = temp;
            st++;
            ed--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        if(k==0){
            return;
        }
        ////////Approach-1//////
        // k = k%n;
        // if(k==0){
        //     return;
        // }
        // vector<int> a;
        // for(int i=n-k;i<n;i++){
        //     a.push_back(nums[i]);
        // }
        // for(int i = n-1;i>=0;i--){
        //     if(i>=k){
        //         nums[i] = nums[i-k];
        //     }else{
        //         nums[i] = a[i];
        //     }
        // }
        // // for(int i = 0 ;i<k;i++){
        // //     nums[i] = a[i];
        // // }
        // return;
        
        /////////Approach-2//////
        reversea(nums,0,n-k-1);
        reversea(nums,n-k,n-1);
        reversea(nums,0,n-1);
        return;
        
    }
};