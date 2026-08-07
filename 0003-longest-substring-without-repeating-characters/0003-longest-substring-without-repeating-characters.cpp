class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int cnt, ans = 0;
        unordered_map<char, int> mpp;
        while (r < s.size()) {
            mpp[s[r]]++;

            if (mpp[s[r]] > 1) {
                while (mpp[s[r]] > 1) {
                    mpp[s[l]]--;
                    l++;
                }
            }
            cnt = r - l + 1;
            ans = max(ans, cnt);
            r++;
        }
        return ans;
    }
};