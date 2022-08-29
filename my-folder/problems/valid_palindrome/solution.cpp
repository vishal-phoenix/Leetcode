class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int st = 0,ed = n-1;
        while(st<ed){
            while(st<ed && !isalnum(s[st]))st++;
            while(st<ed && !isalnum(s[ed]))ed--;
            if(st<ed && tolower(s[st])!=tolower(s[ed])){
                return false;
            }
            st++;
            ed--;
        }
        return true;
    }
};