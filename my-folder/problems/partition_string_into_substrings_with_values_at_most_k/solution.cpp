class Solution {
public:
    int minimumPartition(string s, int k) {
        int x = log10(k)+1;
        int prev = -1;
        int i=0;
        int cnt = 0;
        while(i<s.length()){
            prev = -1;
            int y = x;
            int z = 0;
            while(y-- && i<s.length()){
                z = (z*10)+(s[i]-'0');
                if(z<=k){
                    prev = z;
                }else{
                    break;
                }
                i++;
            }
            //cout<<prev<<" ";
            if(prev == -1){
                break;
            }else{
                cnt++;
            }
        }
        //cout<<endl;
        if(prev == -1){
            return -1;
        }else{
            return cnt;
        }
    }
};