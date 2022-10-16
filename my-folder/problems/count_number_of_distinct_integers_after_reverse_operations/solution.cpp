class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<string> st;
        for(int i=0;i<nums.size();i++){
            string g = to_string(nums[i]);
            st.insert(g);
            string t = "";int cnt=0;
            for(int j = g.length()-1;j>=0;j--){
                if(g[j]=='0' && cnt==0){
                    continue;
                }else{
                    cnt = 1;
                    t+=g[j];
                }
            }
            // cout<<g<<" "<<t<<" ";
            st.insert(t);
        }
        // cout<<endl;
        // for(auto it : st){
        //     cout<<it<<" ";
        // }
        
        return st.size();
    }
};