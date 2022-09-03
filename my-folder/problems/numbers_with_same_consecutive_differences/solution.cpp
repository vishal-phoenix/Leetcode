class Solution {
public:
    vector<int> numsSameConsecDiff(int n, int k) {
        if(n == 1) 
            return {0,1,2,3,4,5,6,7,8,9};

        queue<int> q;
        for(int i=1;i<=9;i++)
            q.push(i);
        
        while(--n){
            int sz = q.size();
            for(int i=0;i<sz;i++){
                int cur = q.front();
                q.pop();
                
                for(int j=0;j<10;j++){
                    if(abs(cur%10 - j) == k)
                        q.push(cur*10+j);
                }   
            }
        }
        
        vector<int> res;
        while(!q.empty())
            res.push_back(q.front()), q.pop();
        
        return res;
    
        
    }
};