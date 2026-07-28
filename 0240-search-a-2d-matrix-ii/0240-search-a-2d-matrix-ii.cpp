class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        
        for (int i = 0; i < m; i++) {
            int st = 0;
        int end = n - 1;
            while (st <= end) {
                int mid = st + (end - st) / 2;
                if (matrix[i][mid] == target) {
                    return true;
                } else if (matrix[i][mid] < target) {
                    st = mid + 1;
                } else {
                    end = mid-1;
                }
            }
        }
        return false;
    }
};