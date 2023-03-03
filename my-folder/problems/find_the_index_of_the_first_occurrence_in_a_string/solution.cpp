class Solution {
public:
    int strStr(string h, string n) {
        int i=0,j=0;
        int pos = -1;
        while(i<h.length()){
            if(h[i]==n[j]){
                pos = i;
                while(h[i]==n[j] && i<h.length() && j<n.length()){
                    i++;j++;
                }
                if(j==n.length()){
                    break;
                }else{
                    i=pos+1;
                    pos = -1;j=0;
                    
                }
            }else{
                i++;j=0;
            }
        }
        return pos;
    }
};