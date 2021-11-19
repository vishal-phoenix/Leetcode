class Solution {
public:
    int hammingDistance(int x, int y) {
        cout<< bitset<32>(5).to_string() << endl;
        return bitset<32>(x^y).count();
    }
};