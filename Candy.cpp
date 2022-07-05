#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {
        int cnt = 0;
        int n = ratings.size();
        vector<int> left1(n),right1(n);
        left1[0] = 1;
        right1[n-1] = 1;
        for(int i=0;i<n;i++){
            if(i>0){
                if(ratings[i]>ratings[i-1]){
                    left1[i] = left1[i-1] + 1;
                }else{
                    left1[i] = 1;
                }
                if(ratings[n-1-i]>ratings[n-i]){
                    right1[n-1-i] = right1[n-i] + 1;
                }else{
                    right1[n-1-i] = 1;
                }
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<left1[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<right1[i]<<" ";
        // }
        // cout<<endl;
        for(int i=0;i<n;i++){
            int maxv = max(left1[i],right1[i]);
            cnt += maxv;
        }

        return cnt;
    }
};

int main(){

    Solution S;
    vector<int> ratings{1,0,2};
    cout<<S.candy(ratings);
    
    return 0;
}
