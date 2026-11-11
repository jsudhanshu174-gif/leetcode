class Solution {
public:
    int myAtoi(string s) {
        long long digit = 0;
        int sign = 1;
        int i = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            if (s[i] == '-') sign = -1;
            i++;
        }
        while (i < s.size() && s[i] >= '0' && s[i] <= '9') {

            int val = s[i] - '0';

            long long limit = (sign == -1) ? 2147483648LL : 2147483647LL;
            if (digit > (limit - val) / 10) {
                if (sign == -1) return INT_MIN;
                else return INT_MAX;
            }

            digit = digit * 10 + val;

            i++;
        }

        return sign * digit;
    }
};
