class Solution {
public:
    void reverse(vector<int>& ans) {
        int st = 0;
        int end = ans.size() - 1;
        while (st < end) {
            swap(ans[st], ans[end]);
            st++;
            end--;
        }
    }
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int, vector<int>> mpp ;
        vector<int> ans;
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat[0].size(); j++) {
                mpp[i + j].push_back(mat[i][j]);
            }
        }
        for (auto it : mpp) {
            if (it.first % 2 == 0) {
                reverse(it.second);

            }
            for (int val : it.second) {
                ans.push_back(val);
            }

        }
        return ans;
    }
};