class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& a) {
        int n = a.size();
        int m = a[0].size();
        // int cnt = 0;
        // bool check = false;
        vector<int> ans;
        int top=0,right = m-1,btm = n-1 ,left =0;
        while(top<=btm &&  left<=right){
            for(int i=left;i<right+1;i++){
                ans.push_back(a[top][i]);
            }
            top++;
            for(int i=top;i<btm+1;i++){
                ans.push_back(a[i][right]);
            }
            right--;
            if(top<=btm){
            for(int i=right;i>=left;i--){
                ans.push_back(a[btm][i]);
            }
            btm--;
            }
            if(left<= right){
            for(int i=btm;i>=top;i--){
                ans.push_back(a[i][left]);   
            }
            left++;
            }
        }
        return ans;
    }
};