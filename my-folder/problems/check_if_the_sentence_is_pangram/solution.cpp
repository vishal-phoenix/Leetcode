class Solution {
public:
    bool checkIfPangram(string s) {
        set<char> st;for(int i=0;i<s.length();i++) st.insert(s[i]);
       bool ans = st.size()==26 ? true : false; return ans;
    }
};