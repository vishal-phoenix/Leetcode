class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<pair<string,int>> q;
        q.push({beginWord,1});
        unordered_set<string> st;
        for(int i=0;i<wordList.size();i++){
            st.insert(wordList[i]);
        }
        while(!q.empty()){
            string sg = q.front().first;
            int ans = q.front().second;
            q.pop();
            if(sg==endWord){
                return ans;
            }
            for(int i=0;i<sg.length();i++){
                for(int j=0;j<26;j++){
                    string exp = sg;
                    exp[i] = 'a'+j;
                    if(st.find(exp)!=st.end()){
                        q.push({exp,ans+1});
                        st.erase(exp);
                    }
                }
            }
            
        }
        return 0;
    }
};