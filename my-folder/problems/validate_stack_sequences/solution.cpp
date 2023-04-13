class Solution {
public:
    bool validateStackSequences(vector<int>& ps, vector<int>& po) {
        stack<int> st;
        int i=0,j=0;
        st.push(ps[i]);
        i++;
        while(j<po.size() && i<=ps.size()){
            if(!st.empty() && st.top()==po[j]){
                j++;
                st.pop();
            }else{
                if(i<ps.size()){
                    st.push(ps[i]);
                }
                i++;
            }
        }
        // if(st.empty()){
        //     cout<<"y";
        // }
        if(j==po.size() && st.empty()){
            return true;
        }
        return false;

    }
};