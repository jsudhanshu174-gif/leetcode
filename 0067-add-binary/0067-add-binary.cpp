class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;

        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int q = (i >= 0) ? a[i--] - '0' : 0;
            int p = (j >= 0) ? b[j--] - '0' : 0;

            int sum = q ^ p ^ carry;

            carry = (q & p) | (q & carry) | (p & carry);

            ans += to_string(sum);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};