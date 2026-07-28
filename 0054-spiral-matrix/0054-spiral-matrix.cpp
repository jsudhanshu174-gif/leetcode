class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top = 0;
        int bottam = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        while(top<=bottam&&left<=right){
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottam; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottam) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottam][i]);
            }
        }
        bottam--;
        if (left <= right) {
            for (int i = bottam; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
        }
        return ans;
    }
};