class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mpp;
        int ans = 0;

        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        for (int i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && mpp[s[i]] < mpp[s[i + 1]]) {
                ans -= mpp[s[i]];
            } else
                ans += mpp[s[i]];
        }

        return ans;
    }
};