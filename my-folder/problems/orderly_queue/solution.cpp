class Solution {
public:
    static string orderlyQueue(string s, int k) {
        if (k == 1) {
            s.reserve(size(s) * 6);
            string_view ans{s};
            s += s;
            string_view sv{s};
            for (int i = 1; i < size(ans); ++i)
                ans = min(ans, sv.substr(i, size(ans)));

            return string{ans};
        }
        
        // With k > 1 we can reorder |s| how we want, so sorting it
        // will yield the lexicographically smallest one.
        // TODO(heder): Use bucket sort.
        sort(begin(s), end(s));
        return s;
    }
};