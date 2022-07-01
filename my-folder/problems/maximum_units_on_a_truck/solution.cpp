class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[](const vector<int>&a, const vector<int>&b){
            return a[1]>b[1];
        });
        int sze = boxTypes.size();
        int sum = 0;
        int j=0;
        for(int i = 0;i<truckSize;i++){
            if (j < sze)
            {
                if (boxTypes[j][0] > 0)
                {
                    boxTypes[j][0]--;
                    sum += boxTypes[j][1];
                    //cout << j << " " << sum << endl;
                }
                else
                {
                    j++;
                    if(j<sze){
                    boxTypes[j][0]--;
                    sum += boxTypes[j][1];
                    //cout << j << " " << sum << endl;
                    }
                }
            }else{
                break;
            }
        }
        return sum;
    }
};