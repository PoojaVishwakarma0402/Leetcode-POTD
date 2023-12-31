// Author : Pooja Vishwakarma
// Date : 03/12/2023
// Problem : Minimum Time Visiting All Points
// Difficulty : Easy
// Problem Link : https://leetcode.com/problems/minimum-time-visiting-all-points/description/


class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int totalTime = 0;
        
        for (int i = 0; i < points.size() - 1; ++i) {
            int x1 = points[i][0];
            int y1 = points[i][1];
            int x2 = points[i + 1][0];
            int y2 = points[i + 1][1];
            
            int xDiff =abs(x2 - x1);
            int yDiff =abs(y2 - y1);
            
            int diagonalMoves = min(xDiff, yDiff);
            int remainingMoves = abs(xDiff - yDiff);
            
            totalTime += diagonalMoves + remainingMoves;
        }
        
        return totalTime;
    }
};


