class Solution {
public:
    int calculateMask(string word){
        int mask = 0;
        for(auto c : word)mask |= (1 << (c-'a'));
        return mask;
    }
    
    vector<int> findNumOfValidWords(vector<string>& words, vector<string>& puzzles) {
        unordered_map<int, int> mask_freq;
        for (auto w: words) mask_freq[(calculateMask(w))]++;
        
        vector<int> ans;
        for(auto p : puzzles) {
            int mask = calculateMask(p), submask = mask, first = (1 << (p[0] - 'a')), curr = 0;
            while (submask) {
                if (submask & first){
                    curr += mask_freq[submask];
                }
                
                submask = (submask-1) & mask;
            }
            
            ans.push_back(curr);
        }
        return ans;
        
    }
};