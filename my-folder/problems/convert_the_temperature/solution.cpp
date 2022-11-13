class Solution {
public:
    vector<double> convertTemperature(double c) {
        double k = c+273.15;
        double f = c * 1.80 + 32.00;
        
        vector<double> ans(2);
        ans[0] = k;
        ans[1] = f;
        return ans;
    }
};