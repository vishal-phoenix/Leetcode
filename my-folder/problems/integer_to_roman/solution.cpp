class Solution {
public:
    string intToRoman(int num) {
        vector<int> nums = {1,5,10,50,100,500,1000,4,9,40,90,400,900};
        sort(nums.begin(), nums.end());
        int closest = 0;
        string ans = "";
        unordered_map<int, string> map;
        map[1] = "I";
        map[4] = "IV";
        map[5] = "V";
        map[9] = "IX";
        map[10] = "X";
        map[50] = "L";
        map[100] = "C";
        map[500] = "D";
        map[1000] = "M";
        map[40] = "XL";
        map[90] = "XC";
        map[400] = "CD";
        map[900] = "CM";

        while(closest < nums.size() && nums[closest] <= num){
            closest++;
        }
        closest--;
        while(num != 0){
            cout << closest << " " << num << endl;
            num -= nums[closest];
            ans += map[nums[closest]];
            if(nums[closest] > num){
                while(closest >= 0 && nums[closest] > num){
                    closest--;
                }
            }
        }
        return ans;
    }
};