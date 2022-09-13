class Solution {
public:
    bool validUtf8(vector<int>& d) {
        int n = d.size();
        int nextn = 0;
        for(int i=0;i<n;i++){
            if(nextn==0){
                if(d[i]>>5 == 0b110){
                    nextn = 1;
                }else if(d[i]>>4 == 0b1110){
                    nextn = 2;
                }else if(d[i]>>3 == 0b11110){
                    nextn = 3;
                }else if(d[i]>>7 != 0b0){
                    return false;
                }
            }else{
                if(d[i]>>6 == 0b10){
                    nextn--;
                }else{
                    return false;
                }
            }
        }
        if(nextn==0){
            return true;
        }
        return false;
    }
};