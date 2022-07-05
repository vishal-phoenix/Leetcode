#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int wiggleMaxLength(vector<int> &nums)
    {
        int numlth = nums.size();
        int cnt = numlth;
        int points;
        for (int i = 1; i < numlth; i++)
        {
            if (nums[i] - nums[i-1] < 0)
            {
                points = 1;
                break;
            }
            else if (nums[i] - nums[i-1] > 0)
            {
                points = -1;
                break;
            }
            else
            {
                cnt--;
            }
        }
        
        int def = numlth - cnt;
        for(int i=def+1;i<numlth-1;i++){
            int def2 = nums[i+1]-nums[i];
            if(points == 1 && (def2>0)){
                points = -1;
            }else if(points == -1 && (def2<0)){
                points = 1;
            }else{
                cnt--;
            }
        }
        return cnt;

    }
};

int main()
{
    Solution S;
    vector<int> nums{1, 17, 5,10,13,15,10,5,16,8};
    cout << S.wiggleMaxLength(nums);
    return 0;
}
