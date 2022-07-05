#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int maxhor = 0, maxver = 0;
        int sizhor = horizontalCuts.size();
        int sizver = verticalCuts.size();
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        for(int i=0;i<sizhor;i++){
            int def = 0;
            if(i==0){
                def = horizontalCuts[0];
            }else{
                def = horizontalCuts[i]-horizontalCuts[i-1];
            }
            maxhor = max(maxhor,def);
        }
        int def2 = h - horizontalCuts[sizhor-1];
        if(def2>=maxhor){
            maxhor = def2;
        }
        for(int i=0;i<sizver;i++){
            int def = 0;
            if(i==0){
                def = verticalCuts[0];
            }else{
                def = verticalCuts[i]-verticalCuts[i-1];
            }
            if(def>=maxver){
                maxver = def;
            }
        }
        int def3 = w - verticalCuts[sizver-1];
        if(def3>=maxver){
            maxver = def3;
        }
        long long  ans = 1;
        ans = (ans*maxhor)%1000000007;
        ans = (ans*maxver)%1000000007;
        return ans;
    }
};
int main(){
    Solution S;
    int h = 5, w = 4;
    vector<int> horizontalCuts{3,1};
    vector<int> verticalCuts{1};
    cout<<S.maxArea(h,w,horizontalCuts,verticalCuts);

    return 0;
}
