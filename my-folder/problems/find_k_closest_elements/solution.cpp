class Solution {
public:
    vector<int> findClosestElements(vector<int>& a, int k, int x) {
        int n = a.size();
        vector<int> ans;
        if(x<=a[0]){
            for(int i=0;i<k;i++){
                ans.emplace_back(a[i]);
            }
        }else if(x>=a[n-1]){
            for(int i=n-1;i>=n-k;i--){
                ans.emplace_back(a[i]);
            }
        }else{
            int pos=0;
            for(int i=0;i<n;i++){
                if(a[i]<=x){
                    pos = max(pos,i);
                }
            }
            int i=pos,j=pos+1;
            while(i>=0 && j<n && k>0){
                int q = abs(a[i]-x);
                int r = abs(a[j]-x);
                if(q<=r){
                    ans.emplace_back(a[i]);
                    i--;
                }else if(q>r){
                    ans.emplace_back(a[j]);
                    j++;
                }
                k--;
            }
            while(k>0 && i>=0){
                ans.emplace_back(a[i]);
                i--;
                k--;
            }
            while(k>0 && j<n){
                ans.emplace_back(a[j]);
                j++;
                k--;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};