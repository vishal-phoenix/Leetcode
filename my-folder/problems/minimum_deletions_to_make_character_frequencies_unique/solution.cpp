class Solution {
public:
    int minDeletions(string s) {
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
    int maxfreqallwd = cnt[0] - 1;
    for (int i = 1; i < lth; i++)
    {
        if (cnt[i] > maxfreqallwd && maxfreqallwd>=0)
        {
            int df = cnt[i] - maxfreqallwd;
            count += df;
            cnt[i] = maxfreqallwd;
            maxfreqallwd = cnt[i] - 1;
        }else if(cnt[i]<= maxfreqallwd && cnt[i]>0){
            maxfreqallwd = cnt[i] - 1;
        }else if(maxfreqallwd<0){
            
            count += cnt[i];
            cnt[i] = 0;
        }
        
    }
    
    return count;
    }
};