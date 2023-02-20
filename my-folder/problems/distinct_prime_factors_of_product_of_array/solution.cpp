class Solution {
public:
    int distinctPrimeFactors(vector<int>& a) {
        unordered_set<int> st;
        vector<int> b;
        b.push_back(2);
        for(int i=3;i<1000;i+=2){
            int x = i;
            int y = sqrt(x);
            bool ch = true;
            for(int j = 3;j<=y;j++){
                if(x%j==0){
                    ch = false;
                    break;
                }
            }
            if(ch){
                b.push_back(x);
            }
        }
        for(int i=0;i<a.size();i++){
            for(int j = 0;j<b.size();j++){
                if(a[i]>=b[j]){
                    if(a[i]%b[j]==0){
                        st.insert(b[j]);
                    }
                }else{
                    break;
                }
            }
        }
        return st.size();
    }
};