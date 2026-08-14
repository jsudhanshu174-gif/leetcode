class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        double sum = 0;

        sort(prices.begin(), prices.end());
        sort(discounts.begin(), discounts.end());
        int j = discounts.size() - 1;
        for (int i = prices.size() - 1; i >= 0; i--) {
            double dic = 0;
            if (j > -1) {
               dic = (prices[i] * discounts[j]) / 100.0;

                j--;
            }
           sum+=prices[i]-dic;
        }
        return sum;
    }
};