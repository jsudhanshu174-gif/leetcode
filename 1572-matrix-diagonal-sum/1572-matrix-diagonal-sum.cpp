class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                if (i==mat.size()/2&&j==mat.size()/2) {
                    ans += mat[i][j];
                } else {
                    if (i + j == mat.size() - 1) {
                        cnt += mat[i][j];
                    } else if (i - j == 0) {
                        cnt += mat[i][j];
                    }
                }
            }
        }
        ans = ans + cnt;
        return ans;
    }
};