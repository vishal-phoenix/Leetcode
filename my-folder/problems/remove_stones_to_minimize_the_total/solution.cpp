class Solution {
public:
    int minStoneSum(vector<int>& p, int k) {
        priority_queue<int>pq;
        for(int x:p){
            pq.push(x);
        }
        while(k--){
            int x=pq.top()/2;
            if(pq.top()%2) x++;
            pq.pop();
            pq.push(x);
        }
        int s=0;
        while(!pq.empty()){
            s+=pq.top();
            pq.pop();
        }

        return s;

    }
};