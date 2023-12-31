// Author : Pooja Vishwakarma
// Date : 10/12/2023
// Problem : Transpose Matrix
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/transpose-matrix/submissions/1116462186/



class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> transposed(m, vector<int>(n, 0)); // Create a new matrix for the transposed result

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                transposed[j][i] = matrix[i][j]; // Swap matrix[i][j] with matrix[j][i]
            }
        }

        return transposed; // Return the transposed matrix
    }
};
