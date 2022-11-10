class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        if(s.length()<=1){
            return s;
        }
        st.push(s[0]);
        for(int i=1;i<s.length();i++){
            if(st.empty()){
                st.push(s[i]);
            }else{
                if(st.top()!=s[i]){
                    st.push(s[i]);
                }else{
                    st.pop();
                }
            }
        }
        s = "";
        while(!st.empty()){
            s = st.top()+s;
            st.pop();
        }
        return s;
    }
};