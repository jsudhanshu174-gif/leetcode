class Solution {
public:
    int maxProduct(int n) {
        int lastdigt;
        int ans = 1;
        int num1 = 0;
        int num2 = 0;
        while (n > 0) {
            lastdigt = n % 10;
            n = n / 10;

            if (num1 <= lastdigt) {
                num2 = num1;
                num1 = lastdigt;
            }
            if (num1 > lastdigt && lastdigt > num2) {
                num2 = lastdigt;
            }
            ans = num1 * num2;
        }
        return ans;
    }
};