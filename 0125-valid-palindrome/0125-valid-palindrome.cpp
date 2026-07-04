class Solution {
public:
 bool alphavalue(char ch) {
    ch = tolower(ch);

    return (ch >= '0' && ch <= '9') ||
           (ch >= 'a' && ch <= 'z');
}
    bool isPalindrome(string s) {
        int st = 0, end = s.length() - 1;
        while (st < end) {
            while (st < end && !alphavalue(s[st]))
                st++;

            while (st < end && !alphavalue(s[end]))
                end--;
            if (tolower(s[st]) != tolower(s[end])) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};