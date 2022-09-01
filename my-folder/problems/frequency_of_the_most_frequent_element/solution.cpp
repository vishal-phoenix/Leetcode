class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
            sort(nums.begin(), nums.end());
            long long i = 0, j = 1, ln = 1, x = 0, tempCost = 0;

            while (j < n)
            {
               // cost calculation
                x = nums[j] - nums[j - 1];
                tempCost += x *(j - i);
				//shrink when cost>k
                while (i < j and tempCost > k)
                {
                    tempCost -= (nums[j] - nums[i]);
                    i++;
                }
               // length of the window
                ln = max(ln, j - i + 1);
                j++;
            }

        return ln;
    }
    
};