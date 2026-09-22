class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& grid) {

        map<int, vector<int>> mpp;
        int n = grid.size();
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                mpp[i - j].push_back(grid[i][j]);
            }
        }
        for (auto& it : mpp) {
                sort(it.second.begin(), it.second.end());
        }
        map<int, int> idx;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                grid[i][j] = mpp[i - j][idx[i - j]++];
            }
        }
        return grid;
    }
};