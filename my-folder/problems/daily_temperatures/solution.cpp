class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n=t.size();
        vector<int> answer(n,0);
        if(n<=1)return answer;
        stack<int> warmer;
        for(int i=n-1;i>=0;i--){
            while(!warmer.empty()&&t[i]>=t[warmer.top()])
                warmer.pop();
            if(!warmer.empty()) answer[i]=warmer.top()-i;
            warmer.push(i);
        }
        return answer;
    }
};