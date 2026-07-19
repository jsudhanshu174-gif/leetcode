class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=-1;
        int m = matrix.size();
  int n = matrix[0].size();
        for (int i = 0; i <= m-1; i++) {
            if (matrix[i][0] < target && matrix[i][n-1] > target) {
                row = i;
                break;
            } else if (matrix[i][0] == target || matrix[i][n-1]==target) {
                return true;
            } 
        }
        if(row==-1) return false;
        
        int st = 0;
        int end = n - 1;
        while (st <= end) {
            int n = matrix[row].size();
            int mid = st + (end - st) / 2;
            if (matrix[row][mid] == target) {
                return true;
            } else if (matrix[row][mid] < target) {

                st = mid+1;
            } else {
                end = mid-1 ;
            }
        }
        return false;
    }
};