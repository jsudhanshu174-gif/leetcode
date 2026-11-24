class Solution {
public:
    int gcd(int a, int b) {
        while (b) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }

    int maxLength(vector<int>& nums) {
        int n = nums.size();

        int mx = 0, ml = 1;
        for (int x : nums) {
            mx = max(mx, x);
            ml = lcm(ml, x);
        }

        long long limit = 1LL * mx * ml;

        int ans = 0;

        for (int i = 0; i < n; i++) {
            long long prod = 1;
            long long g = 0;
            long long l = 1;

            for (int j = i; j < n; j++) {

                prod *= nums[j];

                g = gcd(g, nums[j]);
                l = lcm(l, nums[j]);

                if (prod == g * l) {
                    ans = max(ans, j - i + 1);
                }

                if (prod > limit) {
                    break;
                }
            }
        }

        return ans;
    }
};