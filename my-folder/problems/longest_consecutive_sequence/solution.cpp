class Solution {
public:
    int longestConsecutive(vector<int>& a) {
        int n = a.size();
        sort(a.begin(),a.end());
        int curr = 1,rl = 1;
        if(n==0 || n==1){
            return n;
        }
        for(int i=1;i<n;i++){
            if(a[i] == a[i-1]+1){
                curr++;
            }else if(a[i]==a[i-1]){
                continue;
            }
            else{
                curr=1;
            }
            rl = max(rl,curr);
        }
        return rl;
    }
};