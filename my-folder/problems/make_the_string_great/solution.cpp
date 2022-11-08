class Solution {
public:
    string makeGood(string s) {
        bool check = false;
        do{
            int ct = 0;
            check = false;
            string g = "";
            int i=0;
            if(s.length()==0){
                s = "";
                break;
            }
            while(i<s.length()-1){
                char on=s[i],sc=s[i+1];
                int x = on-'a',y = sc-'a';
                cout<<x<<" "<<y<<" "<<endl;
                if((x<0 && y>=0)|| (x>=0 && y<0)){
                    if(tolower(on)!=tolower(sc)){
                        g+=s[i];
                        i++;
                        ct=0;
                    }else{
                        check = true;
                        i+=2;
                        ct=1;
                    }
                }else{
                    g+=s[i];
                    i++;
                    ct=0;
                }
            }
            cout<<i<<endl;
            if(i<s.length()){
                g+=s[s.length()-1];
            }
            s = g;
            cout<<s<<" "<<check<<endl;
        }while(check);
        return s;
    }
};