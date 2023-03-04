class Solution {
public:
    int splitNum(int num) {
        string s = to_string(num);
        sort(s.begin(),s.end());
        string k="",j="";
        for(int i=0;i<s.length();i++){
            if(i%2==0){
                k+=s[i];
            }else{
                j+=s[i];
            }
        }
        int a = 0,b=0,i=0;
        while(i<k.length()){
            a = (a*10)+(k[i]-'0');
            i++;
        }
        i=0;
        while(i<j.length()){
            b = (b*10)+(j[i]-'0');
            i++;
        }
        return a+b;
    }
};