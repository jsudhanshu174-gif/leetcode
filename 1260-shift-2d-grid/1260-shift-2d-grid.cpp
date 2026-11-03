class Solution {
public:
    void reverse(vector<int>&ans,int start,int end){
        while(start<end){
           swap(ans[start],ans[end]);
           start++;
           end--;
        }
    }
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int> ans;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                ans.push_back(grid[i][j]);
            }
        }
        k = k % (grid.size() * grid[0].size());
        while (k > 0) {
            reverse(ans, 0, ans.size() - 1);
            reverse(ans, 1, ans.size() - 1);
            k--;
        }
        int p=0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                grid[i][j]=ans[p];
                p++;
            }
        }
        return grid;
    }
};