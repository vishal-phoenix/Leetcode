class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        long long volume = long(l)*long(w)*long (h);
        int bk = 0;
        if(l>=10000 || w>=10000 || h>=10000 || volume>=1000000000){
            bk = 1;
        }
        int hv = 0;
        if(m>=100){
            hv = 1;
        }
        if(bk==1 && hv==1){
            return "Both";
        }else if(bk==0 && hv==1){
            return "Heavy";
        }else if(bk==1 && hv==0){
            return "Bulky";
        }else if(bk==0 && hv==0){
            return "Neither";
        }
        return "Neither";
    }
};