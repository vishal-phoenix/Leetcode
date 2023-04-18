class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i=0,j=0;
        string a = "";
        while(i<w1.length() && j<w2.length()){
            a+=w1[i];
            a+=w2[j];
            i++;j++;
        }
        while(i<w1.length()){
            a+=w1[i];
            i++;
        }
        while(j<w2.length()){
            a+=w2[j];
            j++;
        }
        return a;
    }
};