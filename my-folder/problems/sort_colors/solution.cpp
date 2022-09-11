class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int m = 0;
        int h = n-1;
        while(m<=h){
            if(nums[m] == 0){
                nums[m] = nums[l];
                nums[l] = 0;
                m++;l++;
            }else if(nums[m] ==1){
                m++;
            }else if(nums[m] == 2){
                nums[m] = nums[h];
                nums[h] = 2;
                h--;
            }
        }
        
        return;
    }
};