class Solution{

private:
void solve(int row, vector<string>& borad, vector<vector<string>>& ans, int n) {
            if (row == n) {
                ans.push_back(borad);
                return;
            }
            for (int col = 0; col < n; col++) {
                if (check(row,  col,  n, borad)) {
                    borad[row][col] = 'Q';
                    solve(row + 1, borad, ans, n);
                    borad[row][col] = '.';
                }
            }
        }


    bool check(int row, int col, int n, vector<string> borad) {
        // upper col
        for (int i = 0; i < n; i++) {
            if (borad[i][col] == 'Q')
                return false;
        }

        // left diagonal
        int r = row;
        int c = col;
        while (r >= 0 && c >= 0) {
            if (borad[r][c] == 'Q')
                return false;
            r--, c--;
        }
        // right diagonal
        int r1 = row;
        int c2 = col;
        while (r1 >= 0 && c2 < n) {
            if (borad[r1][c2] == 'Q')
                return false;
            r1--, c2++;
        }
return true;
    }

    public:
        vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ans;
            vector<string> borad(n, string(n, '.'));
            solve(0, borad, ans, n);
            return ans;
        }
    };