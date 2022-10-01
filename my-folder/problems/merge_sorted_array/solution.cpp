class Solution {
public:
    void merge(vector<int>& a1, int m, vector<int>& a2, int n) {
        int j=0,i;
        for(i=m;i<n+m;i++){
            a1[i]=a2[j];
            j++;
        }
        int gap = ceil((float)(n+m)/2);
        while(gap>0){
            int i=0;
            int j=gap;
            while(j<(n+m)){
                if(a1[i]>a1[j]){
                    swap(a1[i],a1[j]);
                }
                i++;
                j++;
            }
            if(gap==1){
                gap=0;
            }
            else{
                gap = ceil((float)gap/2);
            }
        }
        return;
    }
};