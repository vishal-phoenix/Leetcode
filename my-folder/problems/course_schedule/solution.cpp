class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> a(numCourses,0);
        vector<int> adj[numCourses];

        
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        for(int i=0;i<numCourses;i++){
            for(auto it: adj[i]){
                a[it]++;
            }
        }
        queue<int> q;
        vector<int> ans;
        for(int i=0;i<numCourses;i++){
            if(a[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int x = q.front();
            q.pop();
            ans.push_back(x);
            for(auto it: adj[x]){
                a[it]--;
                if(a[it]==0){
                    q.push(it);
                }
            }
        }
        if(ans.size()==numCourses){
            return true;
        }else{
            return false;
        }
    }
};