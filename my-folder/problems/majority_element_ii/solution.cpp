class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int cnt1=0,cnt2=0,num1=-1,num2=-1;
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                cnt1 += 1;
            }else if(num2 == nums[i]){
                cnt2+=1;
            }else if(cnt1==0){
                num1 = nums[i];
                cnt1 = 1;
            }else if(cnt2==0){
                num2 = nums[i];
                cnt2 = 1;
            }else{
                cnt1--;
                cnt2--;
            }
            //cout<<num1<<" "<<num2<<endl;
        }
        //cout<<num1<<" "<<num2<<endl;
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                cnt1++;
            }
            if(nums[i]==num2){
                cnt2++;
            }
        }
        //cout<<cnt1<<" "<<cnt2<<" "<<floor(n/3)<<endl;
        if(cnt1>floor(n/3)){
            
            ans.emplace_back(num1);
        }
        if(cnt2>floor(n/3)){
            if(num1!=num2){
                ans.emplace_back(num2);
            }
        }
        return ans;
    }
};