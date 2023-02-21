class Solution {
public:
    int xorBeauty(vector<int>& n) {
        int x=0;
        for(int i=0;i<n.size();i++){
            x^=n[i];
        }
        return x;
    }
};