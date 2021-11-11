class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minsum = 0, currSum = 0;
        for(int x : nums){
            currSum += x;
            if(currSum < minsum){
                minsum = currSum;
            }
        }
        return -minsum +1;
    }
};