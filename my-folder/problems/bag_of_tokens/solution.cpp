class Solution {
public:
    int bagOfTokensScore(vector<int>& a, int p) {
        sort(a.begin(),a.end());
        int maxi = 0,s = 0;
        int i = 0,j = a.size()-1;
        while(i<=j){
            if(p>= a[i]){
                p = p-a[i];
                i++;
                s++;
                maxi = max(maxi,s);
            }else if(p<a[i] && s>0){
                p = p+a[j];
                j--;
                s--;
            }else{
                break;
            }
        }
        return maxi;
    }
};