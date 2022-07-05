#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Solution S;
    string s = "aabbcc";
    // cout<<S.minDeletions(s);
    int lnght = s.length();
    sort(s.begin(), s.end(), greater<char>());
    vector<int> cnt;
    cnt.push_back(1);
    int indx = 0;
    for (int i = 1; i < lnght; i++)
    {
        int temp = cnt[indx];
        if (s[i] == s[i - 1])
        {
            temp++;
            cnt[indx] = temp;
        }
        else
        {
            indx++;
            cnt.push_back(1);
        }
    }
    
    int lth = cnt.size();
    int count = 0;
    sort(cnt.begin(), cnt.end(), greater<int>());
    for(int j=0;j<lth;j++){
    for (int i = 1; i < lth; i++)
    {
        if (cnt[i] == cnt[i - 1])
        {
            count++;
            cnt[i]--;
        }
    }
    sort(cnt.begin(),cnt.end(),greater<int>());
    }
    cout<<count<<endl;
    return 0;
}
