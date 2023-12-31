
// Author : Pooja Vishwakarma
// Date : 14/12/2023
// Problem : Difference Between Ones and Zeros in Row and Column
// Difficulty : Medium
// Problem Link : https://leetcode.com/problems/difference-between-ones-and-zeros-in-row-and-column/description/




class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> onesRow(m, 0);
        vector<int> onesCol(n, 0);
        vector<int> zerosRow(m, 0);
        vector<int> zerosCol(n, 0);

        // Calculate the count of ones and zeros in rows and columns
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    onesRow[i]++;
                    onesCol[j]++;
                } else {
                    zerosRow[i]++;
                    zerosCol[j]++;
                }
            }
        }

        // Calculate the difference matrix
        vector<vector<int>> diff(m, vector<int>(n, 0));
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }

        return diff;
    }
};
