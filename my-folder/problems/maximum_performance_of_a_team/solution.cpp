class Solution {
public:
    int maxPerformance(int n, vector<int>& s, vector<int>& e, int k) {
        
        vector<pair<int,int>> a;
        for(int i=0;i<n;i++){
            a.emplace_back(e[i],s[i]);
        }
        sort(a.rbegin(),a.rend());
        priority_queue<int,vector<int>,greater<int>> p;
        long long int sum = 0,ans = 0;
        for(int i=0;i<n;i++){
            sum += a[i].second;
            p.push(a[i].second);
            if(p.size()>k){
                sum -= p.top();
                p.pop();
            }
            ans = max(ans,sum*a[i].first);
            
        }
        
        return ans%1000000007;
        
    }
};