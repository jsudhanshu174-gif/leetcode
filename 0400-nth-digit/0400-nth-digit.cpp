class Solution {
public:
    int findNthDigit(int n) {
        long long len = 1;
        long long cnt = 9;
        long long st = 1;
        while (n > len * cnt) {
            n -= len * cnt;
            len++;
            cnt = cnt * 10;
            st *= 10;
        }
        st += (n - 1) / len;
        string s = to_string(st);
        return s[(n - 1) % len] - '0';
    }
};