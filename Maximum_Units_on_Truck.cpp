#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &a, const vector<int> &b)
             { return a[1] > b[1]; });
        cout << endl;
        for (int i = 0; i < 10; i++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << boxTypes[i][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
        int sze = boxTypes.size();
        int sum = 0;
        int j = 0;
        for(int i = 0;i<truckSize;i++){
            if (j < sze)
            {
                if (boxTypes[j][0] > 0)
                {
                    boxTypes[j][0]--;
                    sum += boxTypes[j][1];
                }
                else
                {
                    j++;
                    if(j<sze){
                    boxTypes[j][0]--;
                    sum += boxTypes[j][1];
                    }
                }
            }else{
                break;
            }
        }
        return sum;
    }
};

int main()
{

    Solution S;
    vector<vector<int>> boxTypes{{1, 3}, {5, 5}, {2, 5}, {4, 2}, {4, 1}, {3, 1}, {2, 2}, {1, 3}, {2, 5}, {3, 2}};
    int trucksize = 35;
    cout << S.maximumUnits(boxTypes, trucksize);

    return 0;
}
