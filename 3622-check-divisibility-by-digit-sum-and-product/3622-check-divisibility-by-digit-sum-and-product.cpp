class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        string s = to_string(n);
        long prd = s[0]-'0';
        long sum = s[0]-'0';
        for (int i = 1; i < s.size(); i++) {
            sum += s[i]-'0';
            prd *= s[i]-'0';
        }
        long ans = sum + prd;
        if (x % ans == 0) {
            return true;
        }
        return false;
    }
};