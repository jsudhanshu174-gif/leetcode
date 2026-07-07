class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ansrow;
        ansrow.push_back(1);
        long long ans = 1;
        for (int i = 1; i <= rowIndex; i++) {
            ans = ans * (rowIndex - i+1);
            ans=ans/(i);
            ansrow.push_back(ans);
        }
        return ansrow;
    }
};