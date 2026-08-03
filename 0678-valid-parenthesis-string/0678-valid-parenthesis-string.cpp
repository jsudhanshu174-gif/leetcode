class Solution {
public:
    bool checkValidString(string s) {
        int min = 0, max = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                max++;
                min++;
            } else if (s[i] == ')') {
                min--;
                max--;
            } else {
                min--;
                max++;
            }
            if (max < 0)
                return false;
            if (min < 0)
                min = 0;
            
        }
        return (min == 0);
    }
};