#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int lnt = nums.size();
        int answ = nums[lnt-k];
        return answ;
    }
};

int main(){
    Solution S;
    vector<int> nums{3,2,1,5,6,4};
    int k = 2;
    cout<<S.findKthLargest(nums,k);
    return 0;
}
