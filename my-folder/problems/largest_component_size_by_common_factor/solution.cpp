class Solution {
    int _find(int x, vector<int>& parent){
        if(parent[x] == -1){
            return x;
        }
        parent[x] = _find(parent[x], parent);
        return parent[x];
    }
    
    void _union(int x, int y, vector<int>& parent){
        int xp = _find(x, parent);
        int yp = _find(y, parent);
        if(xp != yp)
            parent[yp] = xp;
    }
public:
    int largestComponentSize(vector<int>& A) {
        vector<int> parent(100001, -1);
        for(int x:A){
            for(int i = 2; i<= sqrt(x); ++i){
                if(x % i == 0){
                    _union(i, x, parent);
                    _union(x, x/i, parent);
                }
            }
        }
        int count = 0;
        unordered_map<int, int> cache;
        for(int x:A){
            int xp = _find(x, parent);
            count = max(count, 1+ cache[xp]);
            cache[xp] += 1;
        }
        return count;
    }
};