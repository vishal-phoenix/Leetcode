class Solution {
public:
    double findMedianSortedArrays(vector<int>& a1, vector<int>& a2) {
        int l=0,h=0;
        vector<int>ans;
        int n = a1.size(),m = a2.size();
        while(l<n && h<m ){
            if(a1[l]<a2[h]){
                ans.push_back(a1[l]);
                l++;
                
            }else if(a2[h]<a1[l]){
                ans.push_back(a2[h]);
                h++;
                
            }else{
                ans.push_back(a1[l]);
                ans.push_back(a2[h]);
                l++;h++;
                
            }
        }
        while(l<n){
            ans.push_back(a1[l]);
            l++;
        }
        while(h<m){
            ans.push_back(a2[h]);
            h++;
        }
        if((n+m)%2==0){
            int k = (n+m)/2;
            int j = k-1;
            double f = ((double)ans[k]+(double)ans[j])/(double)2;
            return f;
        }else{
            int k = (n+m)/2;
            
            return (double)ans[k];
        }
    }
};