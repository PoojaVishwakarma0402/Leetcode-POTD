
// Author : Pooja Vishwakarma
// Date : 13/12/2023
// Problem : Special Positions in Binary Matrix
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/special-positions-in-a-binary-matrix/description/



class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> rowSum(m, 0);
        vector<int> colSum(n, 0);
        int count = 0;

        // Calculate rowSum and colSum
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                rowSum[i] += mat[i][j];
                colSum[j] += mat[i][j];
            }
        }

        // Check for special positions
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1 && rowSum[i] == 1 && colSum[j] == 1) {
                    count++;
                }
            }
        }

        return count;
    }
};
