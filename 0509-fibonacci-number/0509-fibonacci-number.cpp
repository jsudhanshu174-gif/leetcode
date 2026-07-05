class Solution {
public:
    int fib(int n) {
        int a = 0, b = 1;
        if (n <= 1) {
            return n;
        }
        for (int i = 1; i < n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
};