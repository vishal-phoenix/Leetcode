class Solution {
public:
    string reverseVowels(string st) {
        set<char> s;
        s.insert('a');s.insert('e');s.insert('i');s.insert('o');s.insert('u');
        int i=0,j=st.length()-1;
        while(i<j){
            char x = tolower(st[i]),y=tolower(st[j]);
            if(s.count(x) && s.count(y)){
                char temp = st[i];
                st[i] = st[j];
                st[j] = temp;
                i++;
                j--;
            }else if(s.count(x)){
                j--;
            }else if(s.count(y)){
                i++;
            }else{
                i++;j--;
            }
        }
        return st;
    }
};