class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==1){
            return 1;
        }
        int i=0,j=0;
        while(i<nums.size() && j<nums.size()){
            if(nums[i]!=nums[j]){
                nums[i+1] = nums[j];
                i++;j++;
            }else{
                j++;
            }
        }
        return i+1;
    }
};