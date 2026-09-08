class Solution {
public:
    int countCommas(int n) {
        string s = to_string(n);
        if (s.size() == 3)
            return 0;
        int cnt = 0;
        for (int i = 1000; i <= n; i++) {
            string p = to_string(i);
            if (p.size() > 3 && p.size() < 7) {
                cnt++;
            } else if (p.size() > 6) {
                cnt = cnt + 2;
            }
        }
        return cnt;
    }
};