class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        map<string,int> mp;
        for(int i=0;i<words.size();i++){
            mp[words[i]]++;
        }
        for(auto it: mp){
            cout<<it.first<<" "<<it.second<<endl;
        }
        int maxi = 0,prev=0,cnt=0;
        for(auto it: mp){
            string s = it.first;
            int val = it.second;
            if(mp[s]>0){
                string rev = s;
                reverse(rev.begin(),rev.end());
                if(rev==s){
                    if(mp[s]%2==0){
                        maxi+=(2*mp[s]);
                        mp[s]=0;
                    }else{
                        if(val>prev){
                            if(cnt>0){
                                maxi-=2;
                                
                            }
                            prev = mp[s];
                            maxi+= (2*prev);
                            mp[s]=0;
                            cnt=1;
                        }else{
                            maxi+=(2*(mp[s]-1));
                            mp[s] = 0;
                        }
                    }
                }else{
                    if(mp.find(rev)!=mp.end()){
                        auto k = mp.find(rev);
                        int val2 = k->second;
                        int mini = min(val,val2);
                        maxi+=(4*mini);
                        mp[rev] = 0;
                    }
                }
                cout<<maxi<<endl;
            }
        }
        return maxi;
    }
};